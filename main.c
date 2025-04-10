#include <stdio.h>
#include <stdlib.h>

main(argc, argv)
int argc;
char** argv;
{
  fork();
  printf("Hello World");
  exit(0);
}
