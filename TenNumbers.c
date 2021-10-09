#include <stdio.h>
#include <conio.h>

int main()
{
    int number[10];
    int highestNumber = 0;
    printf("Introduzca diez numeros\n");
    for (int i = 1; i <= 10; i++)
    {
        scanf("%d", &number[i]);
    }
    int innerCounter = 0;
    for (int outCounter = 0; outCounter <= 10; ++outCounter)
    {
        printf("Values: [%d, %d]\n", outCounter, innerCounter++);
        if (number[outCounter] > number[innerCounter])
        {
            highestNumber = number[outCounter];
        }
        if (number[innerCounter] > number[outCounter])
        {
            highestNumber = number[outCounter];
        }
    }
    printf("Numero mayor es: %d\n", highestNumber);
    getch();
    return 0;
}