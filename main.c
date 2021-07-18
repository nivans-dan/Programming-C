#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lim, ac=0, num;

    printf("\t\t\tDame un limite\n\n");
    scanf("%d",&lim);
    printf("Dame un numero\n\n");
    scanf("%d",&num);
    while(ac+num<lim)
    {
        ac=ac+num;
        printf("Dame otro numero\n\n");
        scanf("%d",&num);
    }
    printf("%d",ac);

    return 0;
}
