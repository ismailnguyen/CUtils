#include <stdio.h>
#include <stdlib.h>

int my_strcmp(char* arg1, char* arg2)
{
	int taille1 = 0;
	int taille2 = 0;
	
	do{	
    taille1 ++;	
	}while(arg1[taille1] != '\0');
	
	do{	
    taille2 ++;	
	}while(arg2[taille2] != '\0');
	
	if(taille1 == taille2)
	{
	 return 0;
	}
	
	if(taille1 < taille2)
	{
	 return -1;
	}
	
	if(taille1 > taille2)
	{
	 return 1;
	}
}

int main(int argc, char** argv){
  if (3 > argc) {
    printf("Nombre de paramètres insuffisants\n");
    return 1; 
  }
  char *chaine1 = argv[1];
  char *chaine2 = argv[2];
  
  printf("%i", my_strcmp(chaine1, chaine2));
  return 0;
}