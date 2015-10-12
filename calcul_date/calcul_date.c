#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isLeapyear(int y)
{
    return (!(y & 3)) && ((y % 100) || (!(y % 400)));
}

int dayNumber(int y, int m, int d)
{
    int result = 0;

    int february = (isLeapyear(y)) ? 29 : 28;

    switch(m)
    {
        case 12 : result += 30;
        case 11 : result += 31;
        case 10 : result += 30;
        case 9 : result += 31;
        case 8 : result += 31;
        case 7 : result += 30;
        case 6 : result += 31;
        case 5 : result += 30;
        case 4 : result += 31;
        case 3 : result += february;
        case 2 : result += 31;
        case 1 : result += 0; break;
    }

    result += d;

    return result;
}

int main(int argc, char** argv){
  if (2 != argc)
  {
    printf("Nombre de parametres insuffisants\n");

    return 1;
  }

    int input = atoi(argv[1]);

    int T[8];
    int i;
    int result = 0;
    int y, m, d;

    for(i=0; i<4; i++)
    {
        T[i] = input%10;
        input /= 10;
    }

    y = T[7]*1000+T[6]*100+T[5]*10+T[4];
    m = T[3]*10+T[2];
    d = T[1]*10+T[0];

  printf("%i", dayNumber(y, m, d));

 return 0;
}
