#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bin=0, num=0, cont=1, c=1;
    while(num<256)
    {
        cont++;
        num=cont;
        bin=0;
        c=1;
        printf("\n%d\t",num);
        while(num!=0)
        {
            bin=bin+(num%2)*c;
            c=c*10;
            num=num/2;
        }
        printf("%d",bin);
    }

    return 0;
}
