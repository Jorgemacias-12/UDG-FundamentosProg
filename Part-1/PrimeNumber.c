//----- LIBRERIAS -----
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    //----- VARIABLE DE REPETICIÓN -----
    char bucle;
    
    //----- BUCLE DE REPETICION -----
    do
    {
    //----- VARIABLES -----
    int divisibleByCounter = 0;
    int inputNumber = 0;

    //----- ENCABEZADO -----
    puts("\n****************************************************************");
    puts("*                     VERIFICAR NUMERO PRIMO                   *");
    puts("****************************************************************\n");
    

    //----- FUNCION PARA VERIFICAR NUMERO PRIMO -----
    printf("VERIFICAR SI UN NUMERO ES PRIMO\n");
    scanf("%d", &inputNumber);
    for (int i = 1; i <= inputNumber; i++)
    {
        if (inputNumber % i == 0)
        {
            ++divisibleByCounter;
        }
    }

    //----- RESULTADO -----
    if (divisibleByCounter == 2) printf("NUMERO: %d ES PRIMO\n", inputNumber);
    else printf("NUMERO: %d NO ES PRIMO\n", inputNumber);
    
    //----- CONFIRMAR O DENEGAR VUELTA -----
    puts("\nDESEA VOLVER A USAR EL PROGRAMA : (S/N)");
    printf("==> ");
    scanf("%s", &bucle);
    system("cls");
    } while (bucle == 's' || bucle == 'S');
    getch();
    return 0;
}