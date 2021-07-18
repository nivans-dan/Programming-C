#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,m,n1,c,n2,d,n3,u,n4;
    while(n<=3000)
    {
        printf("    |    %d\n",n);
        n++;

    if(n>=1&&n<=3000)
    {
        u=n%10;
        n1=n/10;
        d=n1%10;
        n2=n1/10;
        c=n2%10;
        n3=n2/10;
        m=n3%10;
        n4=n3/10;


    switch(m)
    {
        case 1: printf("M");
        break;
        case 2: printf("MM");
        break;
        case 3: printf("MMM");
        break;

    }

    switch(c)
    {
        case 1: printf("C");
        break;
        case 2: printf("CC");
        break;
        case 3: printf("CCC");
        break;
        case 4: printf("CD");
        break;
        case 5: printf("D");
        break;
        case 6: printf("DC");
        break;
        case 7: printf("DCC");
        break;
        case 8: printf("DCCC");
        break;
        case 9: printf("CM");
        break;


    }

      switch(d)
    {
        case 1: printf("X");
        break;
        case 2: printf("XX");
        break;
        case 3: printf("XXX");
        break;
        case 4: printf("XL");
        break;
        case 5: printf("L");
        break;
        case 6: printf("LX");
        break;
        case 7: printf("LXX");
        break;
        case 8: printf("LXXX");
        break;
        case 9: printf("XC");
        break;


    }

     switch(u)
    {
        case 1: printf("I");
        break;
        case 2: printf("II");
        break;
        case 3: printf("III");
        break;
        case 4: printf("IV");
        break;
        case 5: printf("V");
        break;
        case 6: printf("VI");
        break;
        case 7: printf("VII");
        break;
        case 8: printf("VIII");
        break;
        case 9: printf("IX");
        break;

    }
    }
    else
    {
        printf("ERROR");
    }
    }

    return 0;
}
