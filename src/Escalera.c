#include<stdio.h>

void imprimirEscalera(int numEscal)
{
    for (int i = 0; i < numEscal; i++)
    {
        printf("  ");
        printf("|");
        if (i%2==0){
            printf("_+_");
        }else{
           printf("_-_"); 
        }
        printf("  ");
        printf("\n");
        printf("    ");
        for (int e = 0; e < i; e++)
        {
    
            printf("    ");
               
        }
        
    }
    
    
}

int main()
{
    int numEscal=0;
    printf("Ingrese el num de escalera deseadas: ");
    scanf("%i",&numEscal);
    imprimirEscalera(numEscal);
    return 0;
}
