#include<stdio.h>

int main()
{
    int tam=0;
    printf("ingrese el tamanio del cuadrado: ");
    scanf("%i",&tam);
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (i==0 || j==0 || i==(tam-1) || j==(tam-1))
            {
                printf("*"); 
            }else{
                printf(" ");
            }
            
        }
        printf("\n");           
    }
    
    return 0;
}