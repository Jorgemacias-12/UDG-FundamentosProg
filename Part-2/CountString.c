//----- LIBRERIAS -----
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    //----- VARIABLE DE REPETICIÓN -----
    int option;
    
    //----- BUCLE DE REPETICION -----
    
menu:  //----- ENCABEZADO -----
    puts("\n****************************************************************");
    puts("*                 CONTADOR DE STRING                           *");
    puts("****************************************************************\n");

    //----- VARIABLES -----
    int letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', (char)164, 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', (char) 32};
    int letterCount = 0;
    char userInput[1024];
    char *Address = &userInput[0];

    //----- INGRESAR LONGITUD DEL VECTOR -----
    printf("\nINGRESA STRING");
    printf("\n==> ");
    gets(userInput);

    //----- FUNCION PARA CONTAR LETRAS --------
    while (*Address != 0)
    {
        for (int i = 0; i < 27; i++)
        {
            if (*Address == letters[i])
            {
                letterCount++;
            }
        }
        Address++;
    }

    //----- RESULTADO -----
    printf("EL STRING TIENE %d LETRAS", letterCount);
    
    //----- CONFIRMAR O DENEGAR VUELTA -----
    puts("\n\nDESEA CALCULAR OTROS NUMEROS : 0 = S, 1 = N");
    printf("==> ");
    scanf("%d", &option);
    switch (option)
    {
    case 0:
        system("cls");
        goto menu;
    case 1:
        break;
    default:
        goto menu;
    }
    system("cls");
    getch();
    return 0;
}