#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
	int dim = argc-3, i = 0, j = 0, ik, flag2 = 0, t[dim], newdim = 0, n = atoi(argv[argc-1]);

    for(ik=1; ik<argc-1; ik++)
    {
        if(!strcmp(argv[ik], "-")) flag2 = 1;

        if(!flag2) t[ik-1] = atoi(argv[ik]);
    }

    if(n < dim)
    {
        newdim = dim-1;

        int t2[newdim], cpt1, cpt2 = 0;

        for (cpt1 = 0; cpt1 < dim; cpt1++) if (cpt1 != n) t2[cpt2++] = t[cpt1];

        for(i=0; i<newdim; i++) printf("%i ", t2[i]);
    }
    else for(i=0; i<dim; i++) printf("%i ", t[i]);

	return 0;
}
