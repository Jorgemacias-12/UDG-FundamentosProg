#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int divisibleByCounter;
    int inputNumber;
    printf("Verificar si un numero es primo\n");
    scanf("%d", &inputNumber);
    for (int i = 1; i <= inputNumber; i++)
    {
        if (inputNumber % i == 0)
        {
            ++divisibleByCounter;
        }
    }
    if (divisibleByCounter == 2) printf("Numero: %d es primo\n", inputNumber);
    else printf("Numero: %d no es primo\n", inputNumber);
    getch();
    return 0;
}