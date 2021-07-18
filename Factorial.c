#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1,cont=1,num;

    printf("\tDame un numero\n\n");
    scanf("%d",&num);
    while(x<=num)
        {
        cont=cont*x;
        x++;
        }
    printf("%d",cont);
    return 0;
}
