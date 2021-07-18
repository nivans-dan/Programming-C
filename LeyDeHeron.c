#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1,x2,x3,y1,y2,y3;
    float a;
    printf("\n\nEncontrar el area de un triangulo con los puntos de sus esquinas\n\n");
    printf("La formula es:\n\n");
    printf("a = ((X1*Y2)+(X2*Y3))-((X3*Y2)+(X2*Y1))/2\n\n");
    printf("Dar los valores de X1, X2, X3, Y1, Y2, Y3\t");
    scanf("%d %d %d %d %d %d",&x1, &x2, &x3, &y1, &y2, &y3);
    a=(float)((((x1*y2)+(x2*y3))-((x3*y2)+(x2*y1)))/2);
    a=abs(a);
    printf("\n\nEl area del triangulo es %f",a);


    return 0;
}
