 #include <stdio.h>
#include <stdlib.h>
 
 /*
 ** s1 : the string to copy
 ** return the new String copy.
 */
 char* my_strcpy(const char* s1)
 {
	int j = 0;
	int size = strlen(s1);
	
	if (s1[0] == '"')
		j++;
	else if (s1[size] == '"')
		size--;
	
	char * tab;
	tab = calloc (size,sizeof(char));
	
	for(j; size >= j; j++)
	{
		tab[j] = s1[j];
	}
	
	return tab;
 }
 
 
 int main(int argc, char** argv)
{
	if (2 > argc) 
	{
		printf("Nombre de parametres insuffisants\n");
		return 1; 
	}
	
	char *value = argv[1];
	char * copy = my_strcpy(value);
	
	printf("%s ",my_strcpy(value));
}