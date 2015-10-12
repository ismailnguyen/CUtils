#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void str_revert(char*);

void str_revert(char* input)
{
    int i,n;
    char lettre;
 
    n = strlen(input);
 
    for(i = 0;i <n/2;i++)
    {
        lettre = input[i];
        input[i] = input[n-i-1];
        input[n-i-1] = lettre;
    }
	
	printf("%s", input);
}


int main(int argc, char** argv){
  if (2 != argc)
  {
    printf("Nombre de parametres insuffisants\n");

    return 1;
  }

    //int input = atoi(argv[1]);
	char *value2 = argv[1];
	//c = count_vowels(value2);
	str_revert(value2);
 return 0;
}