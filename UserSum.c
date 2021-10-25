//----- LIBRERIAS -----
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    //----- VARIABLE DE REPETICIÓN -----
    char bucle;
    
    //----- BUCLE DE REPETICION -----
    do
    {
    //----- VARIABLES -----
    char character;
    int counter;
    int sum;

    //----- ENCABEZADO -----
    puts("\n****************************************************************");
    puts("*                     SUMA CONTINUA                            *");
    puts("****************************************************************\n");
    

    //----- FUNCION PARA  -----
    while (1)
    {
        ++counter;
        printf("NUMERO INICIAL: %d\n", counter);
        sum += counter;
        if (kbhit())
        {
            character = getch();
            if ((int)character == 13)
            {
                printf("SUMA: %d", sum);
                getch();
            }
        }
    }

    //----- CONFIRMAR O DENEGAR VUELTA -----
    puts("\nDESEA VOLVER A USAR EL PROGRAMA : (S/N)");
    printf("==> ");
    scanf("%s", &bucle);
    system("cls");
    } while (bucle == 's' || bucle == 'S');
    getch();
    return 0;
}