#include <stdio.h>
#include <stdlib.h>
#include <string.h>


short is_palindrome(char* input)
{
	int i, j;
    for (i=0, j=strlen(input)-1; i < j; ++i, --j)
	{
        if (input[i] != input[j])
		{
            return 0;
		}
	}
    return 1;
}

int main(int argc, char** argv){
  if (2 > argc) {
    printf("Nombre de parametres insuffisants\n");
    return 1; 
  }
  
  char *value = argv[1];
  
  printf("%i", is_palindrome(value));
  return 0;
 }