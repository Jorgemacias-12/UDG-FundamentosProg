//----- LIBRERIAS -----
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

#define SEMANA 4
#define DIAS 7

int main(int argc, char **argv){
    //----- VARIABLE DE REPETICIÓN -----
    char bucle;
    
    //----- BUCLE DE REPETICION -----
    do
    {
    
    //----- ENCABEZADO -----
    puts("\n****************************************************************");
    puts("*                     GANANCIAS DEL MES                        *");
    puts("****************************************************************\n");


    //----- VARIABLES -----
    float array[DIAS][SEMANA];
    float totales[SEMANA]={0.0,0.0,0.0,0.0};
    float final = 0.0;
    int filas, columnas, total = 0;

    //----- FUNCION PARA PEDIR DATOS N VECES --------
    for ( filas = 0; filas < DIAS; filas++ )
    {
        for (columnas = 0; columnas < SEMANA; columnas++)
        {
        //----- INTRODUCE NUMERO-----
        printf("\nGANANCIA DEL DIA");
        printf("\n==> ");
        scanf("%f", &array[filas][columnas]);
        }
    }
    
    //----- FUNCIONES PARA SUMAR ARRAY -----
    for(filas = 0; filas < DIAS; filas++){
        for (columnas = 0; columnas < SEMANA; columnas++)
        {
            totales[columnas] += array[filas][columnas];
        }
    }

    for (total = 0; total < SEMANA; total++)
    {
        printf("$%.2f\n", totales[total]);
        final += totales[total];
    }
    
    //----- IMPRIME RESULTADO --------
    printf("GANANCIA DEL MES : $%.2f\n",final);  

    //----- CONFIRMAR O DENEGAR VUELTA -----
    puts("\n\nDESEA CALCULAR OTROS NUMEROS : (S/N)");
    printf("==> ");
    scanf("%s", &bucle);
    system("cls");
    } while (bucle == 's' || bucle == 'S');
    getch();
    return 0;
}