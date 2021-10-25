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
    int number1, number2, number3;

    //----- ENCABEZADO -----
    puts("\n****************************************************************");
    puts("*                     NUMERO MAYOR ENTRE 3 NUMEROS             *");
    puts("****************************************************************\n");
    

    //----- FUNCION PARA NUMERO MAYOR -----
    printf("INTRODUCE 3 NUMEROS\n");
    scanf("%d %d %d", &number1, &number2, &number3);
    if (number1 > number2 && number1 > number3)
    {
        printf("%d ES EL MAYOR", number1);
    }
    else if (number2 > number1 && number2 > number3)
    {
        printf("%d ES EL MAYOR", number2);
    }
    else if (number3 > number1 && number3 > number2)
    {
        printf("%d ES EL MAYOR", number3);
    }
    else
    {
        printf("NUMEROS IGUALES O ALGUN ERROR");
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