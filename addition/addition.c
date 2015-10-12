#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
  if (2 > argc)
  {
    printf("Nombre de parametres insuffisants\n");

    return 1;
  }

  if (3 < argc)
  {
    printf("Trop de parametres\n");

    return 1;
  }

  int input1 = atoi(argv[1]);
  int input2 = atoi(argv[2]);
  int outpout = input1 + input2;

  printf("%i + %i = %i \n", input1, input2, outpout);

  return 0;
}
