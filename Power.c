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
    int number;
    int power;
    int result;

    //----- ENCABEZADO -----
    puts("\n****************************************************************");
    puts("*                     POTENCIA DE NUMERO                       *");
    puts("****************************************************************\n");
    

    //----- FUNCION PARA POTENCIAR NUMERO -----
    printf("INTRODUCE NUMERO\n");
    scanf("%d", &number);
    printf("INTRODUCE POTENCIA\n");
    scanf("%d", &power);

    for (int i = 0; i < power; i++)
    {
        result = number * power;
    }

    //----- RESULTADO -----
    printf("RESULTADO: %d", result);
    
    //----- CONFIRMAR O DENEGAR VUELTA -----
    puts("\nDESEA VOLVER A USAR EL PROGRAMA : (S/N)");
    printf("==> ");
    scanf("%s", &bucle);
    system("cls");
    } while (bucle == 's' || bucle == 'S');
    getch();
    return 0;
}