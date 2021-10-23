//----- LIBRERIAS -----
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define SEMANA 7

int main(int argc, char **argv){
    //----- VARIABLE DE REPETICIÓN -----
    char bucle;
    
    //----- BUCLE DE REPETICION -----
    do
    {
    
    //----- ENCABEZADO -----
    puts("\n****************************************************************");
    puts("*                     GANANCIAS DE LA SEMANA                     *");
    puts("****************************************************************\n");


    //----- VARIABLES -----
    float array[SEMANA],suma;

    //----- FUNCION PARA PEDIR DATOS N VECES --------
    for(int i=0; i<SEMANA; i++)
    {   
        //----- INTRODUCE NUMERO-----
        printf("\nGANANCIA DEL DIA  %d", (i + 1));
        printf("\n==> $");
        scanf("%f", &array[i]);
    }
    
    //----- FUNCION PARA SUMAR ARRAY -----
    for (int i = 0; i < SEMANA; i++ )
    {
      suma += array[i];
    }

    //----- RESULTADO -----
    printf("\nGANANCIA DE LA SEMANA  $%.2f",suma);
    
    //----- CONFIRMAR O DENEGAR VUELTA -----
    puts("\n\nDESEA CALCULAR OTROS NUMEROS : (S/N)");
    printf("==> ");
    scanf("%s", &bucle);
    system("cls");
    } while (bucle == 's' || bucle == 'S');
    getch();
    return 0;
}