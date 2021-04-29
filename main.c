#include <stdio.h>
#include <string.h>

void executeCommand(char cmd[]) {
  printf("execute command: %s", cmd);
}

int main(int argc, char *argv[]) {
	fputs("Welcome to GreenShell\n", stdout);

  // # non-interactive
  if (argc == 2) { // Read and execute file as shell script
    fputs("Not yet implemented\n", stderr);
    return 0;
  } else if (argc == 3) { // flag with argument, @TODO actual parsing
    if (strcmp(argv[1], "-c") == 0) {
      executeCommand(argv[2]);
    } else {
      fprintf( stderr, "unknown flag '%s\n'", argv[1]);
    }
    return 0;
  }

  // # interactive
  char input[2048];
  while (1) {
    fputs("prompt > ", stdout);

    fgets(input, 2048, stdin);

    if( feof(stdin) ) {
       return 0;
    }

    executeCommand(input);
  }

  return 0;
}


