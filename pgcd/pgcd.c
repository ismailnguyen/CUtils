#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv){
  if (3 != argc)
  {
    printf("Nombre de parametres insuffisants\n");

    return 1;
  }

  int input1 = atoi(argv[1]);
  int input2 = atoi(argv[2]);
  int intermediate;

  if((!input1) && (!input2))
    {
        printf("infini\n");

        return 1;
    }

  while(input2)
  {
        intermediate = input1%input2;
        input1 = input2;
        input2 = intermediate;
  }

  printf("%.0f\n", fabs(input1));

 return 0;
}
