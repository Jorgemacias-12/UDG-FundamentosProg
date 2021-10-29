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
    int i, n = 10, array[n], auxiliar;

    //----- ENCABEZADO -----
    puts("\n****************************************************************");
    puts("*              ORDENAR DE MENOR A MAYOR DIEZ NUMEROS             *");
    puts("****************************************************************\n");
    //----- FUNCION PARA PEDIR DATOS DIEZ VECES --------
    for( i=0; i<n; i++)
    {   
        //----- INTRODUCE NUMERO-----
        printf("\nEL NUMERO %d TIENE UN VALOR DE", (i+1) );
        printf("\n==> ");
        scanf("%d", &array[i]);
    }
    
    //----- FUNCION PARA ORDENAR -----
	for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (array[i]<array[j])
            {
                auxiliar = array[i];
                array[i] = array[j];
                array[j] = auxiliar;
            }   
        }   
    }

    //----- IMPRIME RESULTADO --------
    for(int i=0;i<n; i++){
        printf("%d\n",array[i]);
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