#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
  if (2 != argc)
  {
    printf("Nombre de parametres insuffisants\n");

    return 1;
  }

  int input = atoi(argv[1]);
  unsigned long long total = 1;

    if(0 > input)
    {
        printf("%i n\'est pas un entier naturel\n", input);

        return 1;
    }
    for(input; input>=1; input--)
    {
        total *= input;
    }

    printf("%llu", total);

  return 0;
}
