#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <errno.h>

extern int errno;

// @TODO actually parse args
struct cmdArgs {
    char* cmd;
    char* args[];
};
typedef struct cmdArgs CmdArgs;

char* trimNewline(char* arg) {
  strtok(arg, "\n");
  return arg;
}

CmdArgs parseCmdArgs(char input[]) {
  CmdArgs c;
  char* token = c.cmd = strtok(input, " ");
  int i = 0;
  while( token != NULL ) {
    c.args[i] = token;
    token = trimNewline(strtok(NULL, " "));
    i++;
  }
  c.args[i] = NULL; // needed for interactive mode

  return c;
}

void executeCommand(CmdArgs *c) {
  exit(
    execv(c->cmd, c->args)
  );
}

int main(int argc, char* argv[]) {

	fputs("Welcome to GreenShell\n", stdout);

  // ## non-interactive
  if (argc == 2) { // Read and execute file as shell script
    fputs("Not yet implemented\n", stderr);
    return 0;
  } else if (argc == 3) { // flag with argument, @TODO actual parsing
    if (strcmp(argv[1], "-c") == 0) {
      CmdArgs cmdArgs = parseCmdArgs(argv[2]);
      executeCommand(&cmdArgs);
    } else {
      fprintf( stderr, "unknown flag '%s\n'", argv[1]);
      return 1;
    }
    return 0;
  }


  // ## interactive
  int childProcStatus;
  char input[2048];
  while (1) {
    fputs("prompt > ", stdout);

    fgets(input, 2048, stdin);

    if( feof(stdin) ) {
       return 0;
    }

    int childPid = fork();
    if (childPid == 0) { // # Child Process
      CmdArgs cmdArgs = parseCmdArgs(input);
      executeCommand(&cmdArgs);
    } else { // # Parent Process
      if(waitpid(childPid, &childProcStatus, 0) > 0){
        printf("EXITED childProcStatus:%d\n", childProcStatus);
        if (WIFEXITED(childProcStatus) && !WEXITSTATUS(childProcStatus)){
          /* printf("EXITED childProcStatus:%d\n", childProcStatus); */
        }
      }
    }

  }

  return 0;
}


