#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
  if (3 != argc)
  {
    printf("Nombre de parametres insuffisants\n");

    return 1;
  }

  int dividend = atoi(argv[1]);
  int divisor = atoi(argv[2]);

  if((0 > dividend) || (0 > divisor))
  {
    printf("Division sur des entiers naturels uniquement\n");

    return 1;
  }

  if(!divisor)
  {
    printf("Division par zero impossible\n");

    return 1;
  }

  if(dividend < divisor)
  {
    printf("%i n\'est pas divisible par %i\n", dividend, divisor);

    return 1;
  }

    int quotient = dividend / divisor;
    int remainder = dividend % divisor;

    if(remainder)
    {
        printf("%i=%i*%i+%i\n", dividend, quotient, divisor, remainder);
    }
    else
    {
        printf("%i=%i*%i\n", dividend, quotient, divisor);
    }

  return 0;
}
