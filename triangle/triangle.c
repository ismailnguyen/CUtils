#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  if (2 != argc) {
    printf("Nombre de paramètres insuffisant\n");

    return 1;
  }

  int value = atoi(argv[1]);
  int i, tour, espace, etoile = 1;

  tour = value;
  espace = value;

  for(tour; tour != 0; tour--)
  {
    for(i=0; espace!=i; i++)
      {
        printf(" ");
      }
    espace--;

    for(i =0; etoile != i; i++)
      {
        printf("*");
      }
    etoile += 2;

    printf("\n");
  }

  return 0;
}
