#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv){
  if (3 > argc) {
    printf("Nombre de paramètres insuffisant\n");

    return 1;
  }

  int value1 = atoi(argv[1]);
  int value2 = atoi(argv[2]);
  int i = 0, j = 0;
  int result = 0;

  if(value1 < value2)
  {
	for(j = value1; j < value2+1; j++)
	{
	    for(i = value1; i < value2+1; i++)
        {
            result = i * j;
            printf("%i ", result);
        }
        printf("\n");
	}
  }
  else if(value1 > value2)
  {
	for(j = value1; j > value2-1; j--)
	{
	    for(i = value1; i > value2-1; i--)
        {
            result = i * j;
            printf("%i ", result);
        }
        printf("\n");
	}
  }
  else if(value1 == value2)
  {
      printf("%i", value1*value2);
  }

    return 0;
}
