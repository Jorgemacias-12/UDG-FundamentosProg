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
    int result = 0;

    //----- ENCABEZADO -----
    puts("\n****************************************************************");
    puts("*                     SUMAR PRIMEROS 100 PARES                *");
    puts("****************************************************************\n");
    
    //----- FUNCION PARA SUMAR PARES  -----
    for (int i = 2; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            result += i;
            printf("%d\n", i);
        }
    }

    //----- RESULTADO -----
    printf("RESULTADO: %d\n", result);
    
    //----- CONFIRMAR O DENEGAR VUELTA -----
    puts("\nDESEA VOLVER A USAR EL PROGRAMA : (S/N)");
    printf("==> ");
    scanf("%s", &bucle);
    system("cls");
    } while (bucle == 's' || bucle == 'S');
    getch();
    return 0;
}