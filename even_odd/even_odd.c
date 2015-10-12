#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    if (2 != argc)
    {
        printf("Nombre de paramètres insuffisants\n");

        return 1;
    }

    int input = atoi(argv[1]);

    if(!(input % 2))
    {
        printf("0");
    }
    else
    {
        printf("1");
    }

  return 0;
}
