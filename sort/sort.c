#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
    if (4 != argc)
    {
        printf("Nombre de paramètres insuffisants\n");

        return 1;
    }

    int i, j, sorted[3], intermediate;

    sorted[0] = atoi(argv[1]);
    sorted[1] = atoi(argv[2]);
    sorted[2] = atoi(argv[3]);

    for(i=2;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            if(sorted[j-1] > sorted[j])
            {
                intermediate = sorted[j-1];
                sorted[j-1] = sorted[j];
                sorted[j] = intermediate;
            }
        }
    }

    printf("%i %i %i \n", sorted[0], sorted[1], sorted[2]);

    return 0;
}
