#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    system("color 6");            //x  y
    int canvas[10][6]={'\0'};
    int i,x,z,j;
    int t=0;
    int cont=1;
    int aux[10][4];
    int aux2;
    int columnaa;
    int columnab;

    srand(time(NULL));

   //instrucciones
    printf("\t\t\tBienvenido humano o humana a 2048 edicion de columnas!\n\n");
    printf("\tMueve numeros a la columna que gustes, siempre y cuando contengan el mismo numero para poder ser sumados\n\n");
    printf("\t\tRecuerda que el juego terminara cuando ya no tengas movimientos por hacer\n\n");
    printf("\t\t\t\tCuando acumules 512 habras ganado\n\n");
    printf("\t\t\t\tPara iniciar, presiona SPACE\n\n");
    printf("\t"); system("pause");

i=9;
j=0;
    do
    {
        while(j<6)     //ciclo para llenar la matriz con los multiplos de 2 hasta 64
            {
                x=rand()%65;
                if(x==2||x==4||x==8||x==16||x==64||x==32)
                {
                    canvas[i][j]=x;
                    j++;
                }
            }
            i--;
            j=0;
    }while(i>6);
//aprovado______________________
    // ciclo para imprimir el canvas de prueba
   /* for(i=0;i<10;i++){
        for(j=0;j<4;j++){
                if(j==0){printf("%d \t",i);}

            printf("%5d",canvas[i][j]);
            cont++;
        }
        printf("\n");
       }
       printf("\n");
              printf("\n");*/

    for(z=0;z<4;z++)
        {   //lo repite 4 veces para asegurar que se ordenara bien por que luego habian unas columnas que se acomodaban mal
            for(i=0;i<9;i++)
            {   //ciclo para ordenar canvas
                for(j=0;j<6;j++)
                {
                    if(canvas[i][j]>canvas[i+1][j])
                    {
                        aux2=canvas[i][j];
                        canvas[i][j]=canvas[i+1][j];
                        canvas[i+1][j]=aux2;
                    }
                }
            }
        }
// ciclo para imprimir el canvas de prueba 2
   /* for(i=0;i<10;i++){
        for(j=0;j<4;j++){
                if(j==0){printf("%d \t",i);}

            printf("%5d",canvas[i][j]);
            cont++;
        }
        printf("\n");
       }
       printf("\n");
              printf("\n");*/
    do
    {
        system("cls");  //inicia juego
        for(j=0;j<6;j++)
        {
            for(i=0;i<9;i++)
            {
                if(canvas[i][j]==canvas[i+1][j])
                {
                    aux2=canvas[i+1][j];
                    canvas[i+1][j]=canvas[i+1][j]+canvas[i][j];
                    canvas[i][j]=0;
                }
            }
        }
    for(z=0;z<4;z++)    //lo repite 4 veces para asegurar que se ordenara bien por que luego habian unas columnas que se acomodaban mal
    {
        for(i=0;i<9;i++)    //ciclo para ordenar canvas
        {
            for(j=0;j<6;j++)
            {
                if(canvas[i][j]>canvas[i+1][j])
                {
                    aux2=canvas[i][j];
                    canvas[i][j]=canvas[i+1][j];
                    canvas[i+1][j]=aux2;
                }
            }
        }
    }
    for(i=0;i<10;i++)   // ciclo para imprimir el canvas final
        {
            for(j=0;j<6;j++)
            {
                if(j==0)
                {
                    printf("%d \t",i);
                }
                printf("%5d",canvas[i][j]);
                cont++;
            }
        printf("\n");
        }
    printf("Selecciona la columna a mover: ");   //inicia usuario
    scanf("%d",&columnaa);
    for(i=0;i<10;i++)
        {
            if (canvas[i][columnaa]!=0)
            {
                x=i;
                i=20;
            }
        }
    printf("Selecciona la columna final: ");
    scanf("%d",&columnab);
    for(i=0;i<10;i++)
    {
        if (canvas[i][columnab]!=0)
        {
            z=i;
            i=20;
        }
    }
    if(canvas[x][columnaa]==canvas[z][columnab])
    {
        canvas[z][columnab]=canvas[x][columnaa]+canvas[z][columnab];
        canvas[x][columnaa]=0;
    }
    else
    {
        printf("\n\t\tError! Recuerda que tienes que moverlo a un lado con el mismo num para que puedan sumarse\n");
        printf("\tVerifica que aun tengas numeros iguales que puedan sumarse, de no ser asi, el juego habra terminado...\n\n");
    }
    system("pause");  //Para que se vea el error, de lo contrario sigue sin decir nada
    printf("\n\n");
    for(i=0;i<10;i++)
        {
            for(j=0;j<6;j++)
            {
                if(j==0)
                {
                    printf("%d \t",i);
                }
                printf("%5d",canvas[i][j]);
                cont++;
            }
            printf("\n");
       }
        printf("\n");
        printf("\n");
    }while(t==0);

    return 0;
}
