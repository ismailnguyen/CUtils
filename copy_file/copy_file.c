#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAILLE_MAX 1000

int main(int argc, char** argv){

	char chaine[TAILLE_MAX] = "";

	FILE* fichier = NULL;
	FILE* fichier2 = NULL;
    fichier = fopen("exemple.txt", "r+");
	
	
    if (fichier != NULL)
    {
	    fgets(chaine, TAILLE_MAX, fichier);
		fichier2 = fopen("copie.txt", "w");
		 
		fputs(chaine, fichier2);
		
        fclose(fichier);
		fclose(fichier2);	   
    }
	
    else
    {
        printf("Impossible d'ouvrir le fichier exemple.txt");
		return 0;
    }
    return 0; 
}