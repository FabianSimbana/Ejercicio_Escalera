#include<stdio.h>

int main()
{
    int i=0;
    char person[4]={'O','L','C','U'};
    char p;
    char p2[3];
    do{
        printf("\n---- Juego de la Caperucita ---\n");
        printf("...elija un personaje: ");
        scanf("%c",&p);
        p2[0]=p;
        if(p2[0]==person[1] || p2[0]==person[3])
        {
            printf("\n***Game Over***\n");
            i=2;
        }
            fflush(stdin);
    }while(i<1);

    return 0;
}