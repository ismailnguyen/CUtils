#include <stdio.h>
#include <stdlib.h>
int my_atoi(char *s)
{
	int i,num=0,sign=1;

	for(i=0;s[i];i++)
        {
                if(s[i]==' ')
                        continue;
                else if(s[i]=='-') sign=-1;
                else break;
        }

        for(;s[i] && s[i]>='0' && s[i]<='9';i++)
                num=num*10 + s[i]-'0';
        return num*sign;
}
int main(int argc, char** argv){
  if (2 > argc) {
    printf("Nombre de parametres insuffisants\n");
    return 1;
  }
  int value = my_atoi(argv[1]);

	printf("%d",value);
  return 0;
}
