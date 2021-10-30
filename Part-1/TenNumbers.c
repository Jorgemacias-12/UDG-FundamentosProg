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
    int number[10];
    int highestNumber = 0;

    //----- ENCABEZADO -----
    puts("\n****************************************************************");
    puts("*                 NUMERO MAYOR ENTRES 10 NUMEROS               *");
    puts("****************************************************************\n");
    

    //----- FUNCION PARA CALCULAR NUMERO MAYOR -----
    printf("INTRODUZCA DIEZ NUMEROS\n");
    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &number[i]);
    }
    int innerCounter = 0;
    for (int outCounter = 0; outCounter <= 10; ++outCounter)
    {
        printf("VALUES: [%d, %d]\n", outCounter, innerCounter++);
        if (number[outCounter] > number[innerCounter])
        {
            highestNumber = number[outCounter];
        }
        if (number[innerCounter] > number[outCounter])
        {
            highestNumber = number[outCounter];
        }
    }

    //----- RESULTADO -----
    printf("NUMERO MAYOR ES: %d\n", highestNumber);
    
    //----- CONFIRMAR O DENEGAR VUELTA -----
    puts("\nDESEA VOLVER A USAR EL PROGRAMA : (S/N)");
    printf("==> ");
    scanf("%s", &bucle);
    system("cls");
    } while (bucle == 's' || bucle == 'S');
    getch();
    return 0;
}