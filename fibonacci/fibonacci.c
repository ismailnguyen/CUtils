#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv){
  if (argc < 2)
  {
    printf("Nombre de parametres insuffisants\n");

    return 1;
  }

  int input1 = atoi(argv[1]);
  int input2 = atoi(argv[2]);


  if(input1 > input2)
    {
        printf("Le deuxieme argument doit etre plus grand que le premier\n");

        return 1;
    }


  int intermediate;

  if((input1 == 0) && (input2 == 0))
    {
        printf("infini\n");

        return 1;
    }

  while(input2 != 0)
  {
        intermediate = input1%input2;
        input1 = input2;
        input2 = intermediate;
  }

  printf("%.0f\n", fabs(input1));

 return 0;
}
