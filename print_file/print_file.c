#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//size_t fread(const void *ptr, size_t size, size_t nmemb, FILE *stream);
int main(int argc, char** argv){
  if (3 != argc)
  {
    printf("Nombre de parametres insuffisants\n");

    return 1;
  }
    //int input = atoi(argv[1]);
	char *value = argv[1];
	int value2 =atoi(argv[2]);
	FILE *f;
	char c;
	f= fopen(value, "rt");
	
	while((c=fgetc(f))!=EOF)
	{
		/*if(value2 == 1)
		{
			printf("%d", strtol(c, NULL, 16));
		}*/
		if(value2 == 2)
		{
			printf("%d ", (int)c);
		}
		if(value2 == 1)
		{
			printf("%X ", (int)c);
		}
		if(value2 == 3)
		{
			printf("%c", c);
		}
		
	}
	fclose(f);
	//c = co%sunt_vowels(value2);
	//printf("%s",my_strcpy(value2));
    return 0;
}