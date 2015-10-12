#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    if (3 != argc)
  {
    printf("Nombre de parametres insuffisants\n");

    return 1;
  }

    int input_km = atof(argv[1]);
    int input_j = atof(argv[2]);

    float e_jour = 30;
    float e_km = 0.13;
    float e_min = 10;

    float d_jour = 33.40;
    float d_km = 0.11;
    float d_min = 8;

    float tva = 19.6;

    float d_prix, e_prix;

    e_prix = e_min + e_km*input_km + e_jour*input_j;
    e_prix += e_prix*tva/100;

    d_prix = d_min + d_km*input_km + d_jour*input_j;
    d_prix += d_prix*tva/100;

    if(e_prix > d_prix)
    {
        printf("e %.2f d %.2f m e %.2f", e_prix, d_prix, e_prix);
    }
    else
    {
        printf("e %.2f d %.2f m d %.2f", e_prix, d_prix, d_prix);
    }

    return 0;
}
