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
  float result = 0;

    if((!input1) && (!input2))
    {
        printf("indéfini\n");

        return 1;
    }

    if((input1) && (!input2))
    {
        printf("1\n");

        return 0;
    }

    result = pow(input1, input2);

    if(0 > input2)
    {
        printf("%f", result);
    }
    else
    {
        printf("%.0f", result);
    }


  return 0;
}
