//----- LIBRERIAS -----
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    //----- VARIABLE DE REPETICIÓN -----
    char bucle;
    
    //----- BUCLE DE REPETICION -----
    do
    {
    //----- VARIABLES -----
    int numero = 0, factorial = 1, i;
    
    //----- ENCABEZADO -----
    puts("\n****************************************************************");
    puts("*                     FACTORIAL DE UN NUMERO                   *");
    puts("****************************************************************");
    
    //----- INTRODUCE NUMERO -----
    puts("\n\nINGRESA NUMERO");
    printf("==> ");
    scanf("%d", &numero);

    //----- FUNCION PARA REALIZAR FACTORIAL -----
    for (i = numero; i > 1; i--)
    {   
        printf("!%d ",i);
        factorial *= i;
    }

    //----- RESULTADO -----
    printf("\nEL FACTORIAL DE %d ES %d", numero, factorial);
    
    //----- CONFIRMAR O DENEGAR VUELTA -----
    puts("\nDESEA VOLVER A USAR EL PROGRAMA : (S/N)");
    printf("==> ");
    scanf("%s", &bucle);
    system("cls");
    } while (bucle == 's' || bucle == 'S');
    getch();
    return 0;
}