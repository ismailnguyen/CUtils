#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 short is_numeric(char* input)
 {
	int i = 0;
	int flag1 =0;
	int flag = 0;
	
		if(!((input[0] >= '0') && (input[0] <= '9')) && ((input[0] != '+') && (input[0] != '-')))
		{
		 return 0;
		}
		
	for(i = 0; i< strlen(input); i++)
	{	
			
		if(input[i] == '.')
		{
		 flag++;
		 if(flag == 2)
		 {
		  return 0;
		 } 
		}
		
		if(!((input[i] >= '0') && (input[i] <= '9') || (input[i] == '.')) && (i != 0))
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
  printf("%i", is_numeric(value));
  return 0; 
 } 