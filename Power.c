#include <stdio.h>
#include <conio.h>

int main()
{
    int number;
    int power;
    int result;
    printf("Potenciar numero\n");
    printf("Introudce numero y potencia\n");
    scanf("%d %d", &number, &power);
    for (int i = 0; i < power; i++)
    {
        result = number * power;
    }
    printf("Resultado: %d", result);
    getch();
    return 0;
}