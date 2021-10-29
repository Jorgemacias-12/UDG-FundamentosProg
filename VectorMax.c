//----- LIBRERIAS -----
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//----- DECLARAR FUNCION MAYOR -----
int mayor(int vector[], int cantidad, int maximo);

int main(int argc, char **argv)
{
    //----- VARIABLE DE REPETICIÓN -----
    int option;

    //----- BUCLE DE REPETICION -----

menu: //----- ENCABEZADO -----
    puts("\n****************************************************************");
    puts("*                 MAXIMO DE UN VECTOR DE ENTEROS               *");
    puts("****************************************************************\n");

    //----- VARIABLES -----
    int vector[1000], cantidad, resultado, i = 0;

    //----- INGRESAR LONGITUD DEL VECTOR -----
    printf("\nINGRESA LA LONGITUD DEL VECTOR");
    printf("\n==> ");
    scanf("%d", &cantidad);

    //----- FUNCION PARA PEDIR DATOS N VECES --------
    for (int i = 0; i < cantidad; i++)
    {
        printf("\nINGRESA VALOR");
        printf("\n==> ");
        scanf("%d", &vector[i]);
    }

    //----- RESULTADO -----
    resultado = mayor(vector, cantidad - 1, vector[0]);
    printf("\nEL NUMERO MAYOR ES : %d", resultado);

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

//----- FUNCION PARA EXTRAER EL MAXIMO DE UN VECTOR -----
int mayor(int vector[], int cantidad, int maximo)
{
    if (cantidad == 0)
    {
        return maximo;
    }
    else if (vector[cantidad] > maximo)
        maximo = vector[cantidad];
    return mayor(vector, cantidad - 1, maximo);
    return 0;
}
