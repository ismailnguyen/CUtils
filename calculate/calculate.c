#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
  if (4 != argc)
  {
    printf("Nombre de paramètres insuffisants\n");

    return 1;
  }


  int input1 = atoi(argv[1]);
  char* sign = argv[2];
  int input2 = atoi(argv[3]);
  int outpout = 0;


  if(*sign == '+')
  {
      outpout = input1 + input2;
  }
  else if(*sign == '-')
  {
      outpout = input1 - input2;
  }
  else if(*sign == '*')
  {
      outpout = input1 * input2;
  }
  else if(*sign == '/')
  {
      if(input2 == 0)
      {
          printf("Division par 0 interdite");

          return 1;
      }
      outpout = input1 / input2;
  }
  else if(*sign == '%')
  {
      outpout = input1 % input2;
  }
  else
  {
      printf("Expression invalide");

      return 1;
  }

  printf("%i %s %i = %i \n", input1, sign, input2, outpout);

  return 0;
}
