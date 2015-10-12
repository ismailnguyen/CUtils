#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
** Print stats to the stdout.(printf)
** input : the string to analyse
** return nothing.
*/
void str_stats(char* input);

int main(int argc, char** argv)
{
  if (2 > argc)
  {
    printf("Nombre de paramètres insuffisant\n");

    return 1;
  }

    char* input = argv[1];

    str_stats(input);

    return 0;
}

void str_stats(char *input)
{
    int a, b, c, d;

    int nb_vowels = 0;
    int nb_words = 0;
    int nb_consons = 0;
    int nb_nums = 0;

    char *voyelle = "AEIOUYaeiouy";
    char *consonne = "ZRTPQSDFGHJKLMWXCVBNzrtpqsdfghjklmwxcvbn";
    char *chiffre = "0123456789";
    char *mot = " ";

     while (*input != '\0')
     {
          a = 0; b = 0; c = 0; d = 0;

          while (voyelle[a] != '\0')
            if(voyelle[a++] == *input) nb_vowels++;

          while (mot[b] != '\0')
            if(mot[b++] == *input) nb_words++;

          while (consonne[c] != '\0')
          if(consonne[c++] == *input) nb_consons++;

          while (chiffre[d] != '\0')
            if(chiffre[d++] == *input) nb_nums++;

          input++;
     }

    printf("%i mot(s)\n", nb_words+1);
    printf("%i consonne(s)\n", nb_consons);
    printf("%i voyelle(s)\n", nb_vowels);
    printf("%i chiffre(s)\n", nb_nums);
}
