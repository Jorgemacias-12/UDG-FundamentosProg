//----- LIBRERIAS -----
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char **argv){
    //----- VARIABLE DE REPETICIÓN -----
    char bucle;
    
    //----- BUCLE DE REPETICION -----
    do
    {
    //----- VARIABLES -----
    int numero = 0;
    
    //----- ENCABEZADO -----
    puts("\n****************************************************************");
    puts("*           REVISAR SI UN NUMERO ENTERO POSITIVO ES PRIMO      *");
    puts("****************************************************************");
    
    //----- INTRODUCE NUMERO -----
    puts("\n\nINGRESA NUMERO");
    printf("==> ");
    scanf("%d", &numero);

     //----- FUNCION PARA REVISAR NUMEROS PRIMOS -----
    if(numero!=-1 && numero>0)
    {
        //----- VARIABLES LOCALES PARA CADA REINICIO -----
        int divisores = 2, primo = 0;
        while(divisores < numero  && primo != 1)
        {
            if(numero % divisores == 0) primo = 1;
            divisores++;
        }
            
        if (primo==0)
        {   
            //----- RESULTADO -----
            printf("EL %d ES PRIMO",numero);
        }
        else
        {   
            //----- RESULTADO -----
            printf("EL %d NO ES PRIMO",numero);
        }
    }

    //----- CONFIRMAR O DENEGAR VUELTA -----
    puts("\n\nDESEA CALCULAR OTRO NUMERO : (S/N)");
    printf("==> ");
    scanf("%s", &bucle);
    system("cls");
    } while (bucle == 's' || bucle == 'S');
    getch();
    return 0;
}