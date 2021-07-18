#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d=2, num, v[6]={0},p=0,c=0;
    printf("\tDame un numero");
    scanf("%d", &num);
    do
    {
        while(num%d!=0&&d<num)
        {
            d++;
        }
        if(num==d)
        {
            p++;
            v[c]=num;
            c++;
        }
        num++;
        d=2;
    }while(p<6);
    for(c=0;c<6;c++)
    {
        printf("%d\n",v[c]);
    }

    return 0;
}
