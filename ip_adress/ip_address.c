#include <stdio.h>
int main(int argc, char** argv)
{
    if (2 != argc)
    {
        printf("Nombre de paramètres insuffisants\n");

        return 1;
    }

    long input = atoi(argv[1]);

    if(input1 > input2)
    {
        printf("%i", input1);
    }
    else if(input1 < input2)
    {
        printf("%i", input2);
    }
    else if(input1 == input2)
    {
        printf("equals");
    }

  return 0;
}
