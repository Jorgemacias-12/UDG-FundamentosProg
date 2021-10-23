//----- LIBRERIAS -----
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(int argc, char **argv)
{

    //----- VARIABLE DE REPETICIÓN -----
    char bucle;
    
    //----- BUCLE DE REPETICION -----
    do
    {
    //----- VARIABLES -----
    int decimalNumber = 0;
    int binaryBytes[8];
    
    //----- ENCABEZADO -----
    puts("\n****************************************************************");
    puts("*                     DECIMAL A BINARIO                        *");
    puts("****************************************************************");
    

    //----- FUNCION PARA REALIZAR FACTORIAL -----
    printf("CONVERSOR DE BINARIO A DECIMAL DIGITO POR DIGITO\n");
    for (int counter = 0; counter <= 8; counter++)
    {       
        printf("\nEL DIGITO %d TIENE UN VALOR DE\n", (counter+1));
        printf("==> ");
        scanf("%d", &binaryBytes[counter]);
    }
    int opCounter;
    for (opCounter = 0; opCounter < 8; opCounter++)
    {
        printf("VALORES: {CONTADOR: %d, VALOR: %d}\n", opCounter, binaryBytes[opCounter]);
        decimalNumber += binaryBytes[opCounter] * pow(2, opCounter);
    }

    //----- RESULTADO -----
    printf("VALOR DECIMAL: %d", decimalNumber);
    
    //----- CONFIRMAR O DENEGAR VUELTA -----
    puts("\n\nDESEA CALCULAR OTRO NUMERO : (S/N)");
    printf("==> ");
    scanf("%s", &bucle);
    system("cls");
    } while (bucle == 's' || bucle == 'S');
    getch();
    return 0;
}