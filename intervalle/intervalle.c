#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
  if (3 != argc)
  {
    printf("Nombre de parametres insuffisants\n");

    return 1;
  }

  int input1 = atoi(argv[1]);
  int input2 = atoi(argv[2]);

    if(input1 < input2)
    {
        for(input1; input1<=input2; input1++)
        {
            printf("%i ", input1);
        }
    }
    else if(input2 < input1)
    {
        for(input1; input1>=input2; input1--)
        {
            printf("%i ", input1);
        }
    }
    else if(input2 == input1)
    {
            printf("%i", input1, input2);
    }
    else
    {
        printf("%i %i", input1, input2);
    }

  return 0;
}
