// Simple program launcher in C

#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h>
#include <errno.h>
#include <string.h>

int main() {

  // Read Command Line Input
  printf("What would you like to do?\n");
  char input[100]; // Raw input
  fgets(input, 100, stdin);
  if (input[strlen(input) - 1] == '\n')
    input[strlen(input) - 1] = 0; // removing newline

  char * command[20];
  char * iter = input;
  int i = 0;
  while (iter) {
    command[i] = strsep(&iter, " ");
    i++;
  }
  command[i] = 0;
  
  int x = execvp(command[0], command);
  
  printf("%d\n", x);
  return 0;
}
