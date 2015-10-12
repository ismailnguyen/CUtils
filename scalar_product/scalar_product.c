#include <stdio.h>
#include <stdlib.h>
/*
 ** v1, v2, the vectors.
 ** dim, dimension of the vectors.
 */
long scalar_product(int v1[], int v2[], int dim);
short is_numeric(char* input);

int main(int argc, char** argv)
{
    if(argc % 2)
    {
        printf("Nombre de paramètres insuffisant\n");
        return 1;
    }

    int dim = argc;
    dim -= 2;
    dim /= 2;

    int v1[dim], v2[dim];

    int i, j;
    for(i=0; i<dim; i++)
    {
        if(is_numeric(argv[i+1]))
        {
            v1[i] = atoi(argv[i+1]);
        }
        else
        {
            printf("%s est invalide\n", argv[i+1]);
            return 1;
        }
    }

    for(j=0; j<dim; j++)
    {
        if(is_numeric(argv[j+dim+2]))
        {
            v2[j] = atoi(argv[j+dim+2]);
        }
        else
        {
            printf("%s est invalide\n", argv[j+dim+2]);
            return 1;
        }
    }


    long result = scalar_product(v1, v2, dim);

    printf("%i\n", result);
}

long scalar_product(int v1[], int v2[], int dim)
{
    int i;
    long result = 0;
    for(i=0; i<dim; i++)
    {
        result += v1[i]*v2[i];
    }

    return result;
}

short is_numeric(char* input)
 {
	int i = 0;
	int flag1 =0;
	int flag = 0;

		if(!((input[0] >= '0') && (input[0] <= '9')) && ((input[0] != '+') && (input[0] != '-')))
		{
		 return 0;
		}

	for(i = 0; i< strlen(input); i++)
	{

		if(input[i] == '.')
		{
		 flag++;
		 if(flag == 2)
		 {
		  return 0;
		 }
		}

		if(!((input[i] >= '0') && (input[i] <= '9') || (input[i] == '.')) && (i != 0))
		{
		 return 0;
		}
	}
	return 1;
 }
