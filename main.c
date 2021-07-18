#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c, r, cf;
    int cont=0;
    printf("\tDame el capital\n\n");
    scanf("%f",&c);
    printf("\tDame el interes\n\n");
    scanf("%f",&r);
    cf=c;
    do
    {
        cf=cf*(1+r/100);
        cont++;
    }
    while(cf<c*2);
    printf("%d", cont);

    return 0;
}
