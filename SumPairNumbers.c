#include <stdio.h>
#include <conio.h>

int main()
{
    int result;
    printf("Sumando los primeros 100 numeros pares\n");
    for (int i = 2; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            result += i;
            printf("%d\n", i);
        }
    }
    printf("Resultado: %d\n", result);
    getch();
    return 0;
}