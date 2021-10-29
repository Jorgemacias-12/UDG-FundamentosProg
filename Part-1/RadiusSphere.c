//----- LIBRERIAS -----
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

int main()
{
    //----- VARIABLE DE REPETICIÓN -----
    char bucle;
    
    //----- BUCLE DE REPETICION -----
    do
    {
    //----- VARIABLES -----
    setlocale(LC_ALL, "");
    int radius = 0;
    float area;
    float volume;

    //----- ENCABEZADO -----
    puts("\n****************************************************************");
    puts("*                CALCULAR AREA Y VOLUMEN DE ESFERA             *");
    puts("****************************************************************\n");
    
    //----- FUNCION PARA  -----
    printf("INTRODUZCA EL RADIO\n");
    scanf("%d", &radius);
    volume = (4 / 3 * 3.1415) * radius * radius * radius;
    area = (4 * 3.1415) * radius * radius;

    //----- RESULTADO -----
    printf("VOLUMEN: %fm", volume);
    putchar(179);
    printf("\n");
    printf("AREA: %fm", area);
    putchar(178);
    printf("\n");
    
    //----- CONFIRMAR O DENEGAR VUELTA -----
    puts("\nDESEA VOLVER A USAR EL PROGRAMA : (S/N)");
    printf("==> ");
    scanf("%s", &bucle);
    system("cls");
    } while (bucle == 's' || bucle == 'S');
    getch();
    return 0;
}