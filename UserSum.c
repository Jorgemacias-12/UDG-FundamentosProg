#include <stdio.h>
#include <conio.h>

int main()
{
    char character;
    int counter;
    int sum;
    printf("Hola, sumando numeros hasta que lo interumpas\n");
    while (1)
    {
        ++counter;
        printf("Numero incremental: %d\n", counter);
        sum += counter;
        if (kbhit())
        {
            character = getch();
            if ((int)character == 13)
            {
                printf("Suma: %d", sum);
                getch();
            }
        }
    }
    return 0;
}