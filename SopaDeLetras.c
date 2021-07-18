#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>          //Daniel Nava Martínez y Carlos Ernesto Quintana Rivera - 103
#include <string.h>

int main()
{
    srand(time(NULL));
    char Pal[15][15], Soup[15][15]={0}, V[15];
    int i=0, band=1, x, y, eje, num, a, u, f, al, w, bn, opc;

    printf("\tEncuentra 5 de las siguientes palabras, las cuales se eligieron aleatoriamente\n");
    strcpy(Pal[0],"arbol");
    strcpy(Pal[1],"barco");
    strcpy(Pal[2],"casa");
    strcpy(Pal[3],"dinero");
    strcpy(Pal[4],"electrico");
    strcpy(Pal[5],"fierro");
    strcpy(Pal[6],"gato");
    strcpy(Pal[7],"hormiga");
    strcpy(Pal[8],"igualdad");
    strcpy(Pal[9],"jamaica");
    strcpy(Pal[10],"kilometro");
    strcpy(Pal[11],"libro");
    strcpy(Pal[12],"matriz");
    strcpy(Pal[13],"naranja");
    strcpy(Pal[14],"oreja");

    do
    {
        char Soup[15][15]={0}, V[15];  //Ernesto, por esto no jalaba el do while, tenemos que "reiniciar" todo >:(
        int i=0, band=1, x, y, eje, num, a, u, f, al, w, bn, opc;
        for(i=0;i<5;i++)
        {
            u=rand()%15;   //Selecciona 5 de las 15
            num=strlen(Pal[u]);
            eje=rand()%2;
            if(eje==0)
            {
                band=1;
                while(band==1)
                {
                    y=rand()%(15-num);  //Espacios...
                    x=rand()%(15-num);
                    for(a=y,band=0;a<=(num+y)&&band==0;a++)
                    {
                        if(Soup[x][a]==0)
                        {
                            band=0;
                        }
                        else
                        {
                            band=1;
                        }
                    }
                }
                if(band==0)
                {
                    for(f=0;Pal[u][f]!='\0';y++,f++)
                    {
                        Soup[x][y]=Pal[u][f];
                    }
                }
            }
            else
            {
                band=1;
                while(band==1)
                {
                    y=rand()%(15-num);  //Espacios...
                    x=rand()%(15-num);
                    for(a=x,band=0;a<=(num+x)&&band==0;a++)
                    {
                        if(Soup[a][y]==0)
                        {
                            band=0;
                        }
                        else
                        {
                            band=1;
                        }
                    }
                }
                if(band==0)
                {
                    for(f=0;Pal[u][f]!='\0';x++,f++)
                    {
                        Soup[x][y]=Pal[u][f];
                    }
                }
            }
        }
        for(num=0;num<15;num++)  //llena matriz faltante
        {
            for(a=0;a<15;a++)
            {
                if(Soup[num][a]==0)
                {
                    Soup[num][a]=rand()%26+97;
                    printf("%c  ",Soup[num][a]);
                }
                else
                {
                    printf("%c  ",Soup[num][a]);
                }
            }
            printf("\n");
        }
        f=0;
        al=0;
        do
        {
            system("cls");
            printf("\tEncuentra 5 de las siguientes palabras, las cuales se eligieron aleatoriamente\n");
            puts(Pal[0]);
            puts(Pal[1]);
            puts(Pal[2]);
            puts(Pal[3]);
            puts(Pal[4]);
            puts(Pal[5]);
            puts(Pal[6]);
            puts(Pal[7]);
            puts(Pal[8]);
            puts(Pal[9]);
            puts(Pal[10]);
            puts(Pal[11]);
            puts(Pal[12]);
            puts(Pal[13]);
            puts(Pal[14]);
            printf("\n");
            for(w=0;w<15;w++)
            {
                for(bn=0;bn<15;bn++)  //Mete palabras
                {
                    printf("%c   ",Soup[w][bn]);
                }
                printf("\n");
            }
            al=al+1;
            printf("COORDENADA DEL EJE X DONDE CREAS QUE HAY UNA PALABRA\n");
            scanf("%d",&x);
            printf("COORDENADA DEL EJE Y DE LA MISMA\n");
            scanf("%d",&y);
            printf("CUANTAS LETRAS TIENE LA PALABRA?\n");
            scanf("%d",&num);
            printf("PRESIONA 1 SI ES HORIZONTAL, 2 PARA VERTICAL\n");
            scanf("%d",&eje);
            if(eje==1)
            {
                for(i=y,a=0;i<(num+y);i++,a++)
                {
                    V[a]=Soup[x][i];
                }
                V[a]='\0';
            }
            else
            {
                for(i=x,a=0;i<(num+x);i++,a++)
                {
                    V[a]=Soup[i][y];
                }
                V[a]='\0';
            }
            for(i=0,band=0;i<15&&band==0;i++)
            {
                if(strcmp(V,Pal[i])==0)
                {
                    f=f+1;
                    band=1;
                }
            }
        }while(al<5);
        if(f==5)
        {
            printf("\n¡...FELICIDADES, GANASTE...!\n");
        }
        else
        {
            printf("\nSuerte la proxima, perdiste...\n");
        }
        printf("Quieres jugar otra vez? Presiona 1 para insertar otra moneda\n");
        scanf("%d",&opc);

    }while(opc!=1);

    return 0;
}
