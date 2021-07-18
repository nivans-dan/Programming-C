#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL));

    int x, y;

    x=rand()%14+1; //el primero es el final y el segundo el inicio, ej: un numero aleatorio de 1 a 15 (14+1=15. Depende del signo
    y=rand()%20+5;
    printf("%d %d",x,y);

    return 0;
}
