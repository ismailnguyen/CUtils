#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv){
  if (2 > argc) {
    printf("Nombre de parametres insuffisants\n");
    return 1; 
  }
  
  int nb = atoi(argv[1]);
  int i, test;
  
  test =0;
 
  if(nb == 0)
  {
   printf("0 est exclut");
   return 0;
  }
  
  if(nb == 1)
  {
    printf("1 est exclut");
	return 0;
  }
 
  for(i = 2; i < nb; i++)
  {
    if(nb % i == 0)
	{
	 test = 1;
	}
  }
	
	if(!test)
	{
	 printf("%i", 1);
	 return 0;
	}
	
	else
	{
	 printf("%i", 0);
	 return 0;
	} 
	
	 
}	