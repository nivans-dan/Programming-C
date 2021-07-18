#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, exponente, tot=1;

    printf("\t\t\t\tDame la base\n\n");
    scanf("%d",&base);
    printf("Dame el exponente\n\n");
    scanf("%d",&exponente);
    while(exponente>=1)
    {
        tot=tot*base;
        exponente=exponente-1;
    }
    printf("%d",tot);
    return 0;
}
