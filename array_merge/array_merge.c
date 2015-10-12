#include <stdio.h>
#include <stdlib.h>

int compare (const void * first, const void * second)
{
    return  *(int*)first - *(int*)second ;
}

int main(int argc, char** argv)
{
    int ik = 1, dimT1 = 0, dimT2 = 0;
    int flag = 0, flag2 = 0;
    int dim = argc-2;
    int dim2 = argc-2;

    for(dim; dim>0; dim--)
    {
        if(!strcmp(argv[ik], "-"))
        {
            flag = 1;
        }

        if(!flag)
        {
            dimT1++;
        }
        else
        {
            dimT2++;
        }

        ik++;
    }

    int a[dimT1], b[dimT2];
    ik = 1;
    int ia = 1;
    int ib = 1;

    for(dim2; dim2>0; dim2--)
    {
        if(!strcmp(argv[ik], "-"))
        {
            flag2 = 1;
        }

        if(!flag2)
        {
            a[ia-1] = atoi(argv[ik]);
            ia++;
        }
        else
        {
            b[ib-1] = atoi(argv[ik+1]);
            ib++;
        }

        ik++;
    }

    if(!flag)
    {
        printf("incorrect\n");
        return 1;
    }

    size_t sizeA =sizeof(a)/sizeof(a[0]);
    size_t sizeB = sizeof(b)/sizeof(b[0]);
    size_t sizeC = sizeA + sizeB;

    int *c = malloc(sizeof(int)*sizeC);
    unsigned i;

    for(i = 0; i<sizeA; ++i)
    {
        c[i] = a[i];
    }

    for(i = 0; i < sizeB; ++i)
    {
        c[sizeA+i] = b[i];
    }

    qsort(c, sizeC, sizeof(int), compare);

    for(i = 0; i < sizeC; ++i)
    {
        printf("%d ", c[i]);
    }


    return 0;
}
