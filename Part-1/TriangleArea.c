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
    int base;
    int height;
    int area;

    //----- ENCABEZADO -----
    puts("\n****************************************************************");
    puts("*                     AREA DE TRIANGULO                        *");
    puts("****************************************************************\n");
    

    //----- FUNCION PARA  -----
    printf("DIGITE BASE\n");
    scanf("%d", &base);
    printf("DIGITE ALTURA\n");
    scanf("%d", &height);
    area = (base * height) / 2;

    //----- RESULTADO -----
    printf("AREA DE TRIANGULO: %d", area);
    
    //----- CONFIRMAR O DENEGAR VUELTA -----
    puts("\nDESEA VOLVER A USAR EL PROGRAMA : (S/N)");
    printf("==> ");
    scanf("%s", &bucle);
    system("cls");
    } while (bucle == 's' || bucle == 'S');
    getch();
    return 0;
}