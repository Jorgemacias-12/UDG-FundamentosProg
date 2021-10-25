//----- LIBRERIAS -----
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    //----- VARIABLE DE REPETICIÓN -----
    char bucle;
    
    //----- BUCLE DE REPETICION -----
    do
    {
    //----- VARIABLES -----
    setlocale(LC_ALL, "C");
    char vocals[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    char consonants[] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', (char)164, 'p', 'q', 'r', 's', 't', 'v', 'x', 'y', 'z'};
    char letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', (char)164, 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char userInput[1024];
    int characterIterator = 0;
    int vocalsCount = 0;
    int consonantsCount = 0;
    int spacesCount = 0;
    int digitsCount = 0;

    //----- ENCABEZADO -----
    puts("\n****************************************************************");
    puts("*                     ANALIZAR CADENA                          *");
    puts("****************************************************************\n");
    

    //----- FUNCION PARA ANALIZAR LA CADENA -----
    printf("INGRESE TEXTO A ANALIZAR: ");
    gets(userInput);
    while (userInput[characterIterator] != '\0')
    {
        for (int vocalIterator = 0; vocalIterator < 10; vocalIterator++)
        {
            if (userInput[characterIterator] == vocals[vocalIterator])
            {
                vocalsCount++;
            }
        }
        for (int consonantIterator = 0; consonantIterator < 20; consonantIterator++)
        {
            if (userInput[characterIterator] == consonants[consonantIterator])
            {
                consonantsCount++;
            }
            else if (userInput[characterIterator] == toupper(consonants[consonantIterator]))
            {
                consonantsCount++;
            }
        }
        for (int digitIterator = 0; digitIterator < 27; digitIterator++)
        {
            if (userInput[characterIterator] == letters[digitIterator])
            {
                digitsCount++;
            }
            else if (userInput[characterIterator] == toupper(letters[digitIterator]))
            {
                digitsCount++;
            }
        }
        if (userInput[characterIterator] == ' ')
        {
            spacesCount++;
        }
        characterIterator++;
        printf("VALORES: %c\n", userInput[characterIterator - 1]);
    }

    //----- RESULTADO -----
    printf("\nVOCALES: %d\n", vocalsCount);
    printf("CONSONANTES: %d\n", consonantsCount);
    printf("ESPACIOS: %d\n", spacesCount);
    printf("DIGITOS: %d\n", digitsCount);
    
    //----- CONFIRMAR O DENEGAR VUELTA -----
    puts("\nDESEA VOLVER A USAR EL PROGRAMA : (S/N)");
    printf("==> ");
    scanf("%s", &bucle);
    system("cls");
    } while (bucle == 's' || bucle == 'S');
    getch();
    return 0;
}
