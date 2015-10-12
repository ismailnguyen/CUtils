#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
//char* replace(const char*, char*, char*);
char* replace_str(const char *, char *, char *);
//char* replace(const char* input, char* pattern, char* replacement)
char* replace_str(const char* str, char* orig, char* rep)
{
	static char buffer[4096];
	char *p;
	char *tmp;
	*tmp = *str;
	if(!(p = strstr(str, orig)))
	{
		return tmp;
	}
	
	strncpy(buffer, str, p-str);
	buffer[p-str] = '\0';
	
	sprintf(buffer+(p-str), "%s%s", rep, p+strlen(orig));
	return buffer;
}
 


int main(int argc, char** argv){
  if (4 != argc)
  {
    printf("Nombre de parametres insuffisants\n");

    return 1;
  }
	//puts(replace_str("Hello, world!", "world", "Miami"));
    //int input = atoi(argv[1]);
	char *value2 = argv[2];
	char *value = argv[1];
	char *value3 = argv[3];
	//printf(" %s, %s, %s ", value, value2, value3);
	printf("%s\n", replace_str(value, value2, value3));
	//c = co%sunt_vowels(value2);
	//printf("%s",my_strcpy(value2));
    return 0;
}