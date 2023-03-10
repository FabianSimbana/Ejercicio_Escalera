#include <stdio.h>
#include <unistd.h>
#include <Windows.h>

// color a lo que se imprime en consola
void setColor(int Background, int Text){ 
    int colorTexto= Text + (Background * 16);         
    HANDLE terminal = GetStdHandle(STD_OUTPUT_HANDLE);   
    SetConsoleTextAttribute(terminal, colorTexto); 
}

void showProgressBar_o(int velocidad, char correo[])
{
    FILE *resultado = fopen("log.txt", "w");
    int saltos = 0;
    int reversa = 0;
    float porcentaje = 0;
    for (int i = 0; i < 26; i++)
    {
        setColor(0,9);
        usleep(60000);
        printf("[");
        fputs("[", resultado);
        if (reversa == 0)
        {
            for (int a = 0; a < 24; a++)
            {
                if (a < saltos)
                {
                    printf(" ");
                    fputs(" ", resultado);
                }
                else if (a == saltos)
                {
                    printf("<<-->>");
                    fputs("<<-->>", resultado);
                }
                else
                {
                    printf(" ");
                    fputs(" ", resultado);
                }
            }   
        }
        else
        {
            for (int a = 0; a < 24; a++)
            {
                if (a == 25 - saltos)
                {
                    printf("<<-->>");
                    fputs("<<-->>", resultado);
                }
                else if (a < 25 - saltos)
                {
                    printf(" ");
                    fputs(" ", resultado);
                }
                else
                {
                    printf(" ");
                    fputs(" ", resultado);
                }
            }   
        }
        saltos += velocidad;
        if (saltos > 25 && reversa == 0)
        {
            saltos = velocidad;
            reversa = 1;
        }
        if (saltos > 25 && reversa == 1)
        {
            saltos = velocidad;
            reversa = 0;
        }
        printf("]"); 
        fputs("]", resultado);
        usleep(60000);
        printf(" %.0f%%", porcentaje);
        porcentaje +=  (100 / (float) 25);
        usleep(60000);

        setColor(0,10);
        printf("\t\tLoading %i de 25 \t\t", i);

        fputs("\t\tLoading ", resultado);
        char numero[4];
        itoa(i, numero, 10);
        fputs(numero, resultado);
        fputs(" de 25 \t\t", resultado);

        usleep(60000);

        setColor(0,4);
        for (int b = 0; b < i; b++)
        {
            printf("%c", correo[b]);
            fputc(correo[b], resultado);
        }

        printf("\n");
        fputs("\n", resultado);
        usleep(100000);
    }
    fclose(resultado);
}