#include <stdio.h>

static char input[2048];

int main(int argc, char *argv[]) {
	fputs("Welcome to GreenShell\n", stdout);

  while (1) {
    fputs("prompt > ", stdout);

    fgets(input, 2048, stdin);

    printf("You entered %s", input);
  }

  return 0;
}


