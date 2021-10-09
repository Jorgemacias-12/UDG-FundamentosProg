#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int radius;
    float area;
    float volume;
    printf("Area y volumen de esfera");
    printf("Introduzca el radio\n");
    scanf("%d", &radius);
    volume = (4 / 3 * 3.1415) * radius * radius * radius;
    area = (4 * 3.1415) * radius * radius;
    printf("Volumen: %fm", volume);
    putchar(179);
    printf("\n");
    printf("Area: %fm", area);
    putchar(178);
    printf("\n");
    getch();
    return 0;
}