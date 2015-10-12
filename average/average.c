#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
  if (2 > argc)
  {
    printf("Nombre de parametres insuffisants\n");

    return 1;
  }

  float result = 0;
  int total = 0;

  int i = 1;
  while(atoi(argv[i]))
  {
        total += atoi(argv[i]);
        i++;
  }

    i--;
    result = (float)total/i;
    printf("%.1f\n", result);

  return 0;
}
