#include <stdio.h>
#include <conio.h>

int main()
{
    int number1, number2, number3;
    printf("Introudce 3 numeros\n");
    scanf("%d %d %d", &number1, &number2, &number3);
    if (number1 > number2 && number1 > number3)
    {
        printf("%d es el mayor", number1);
    }
    else if (number2 > number1 && number2 > number3)
    {
        printf("%d es el mayor", number2);
    }
    else if (number3 > number1 && number3 > number2)
    {
        printf("%d es el mayor", number3);
    }
    else
    {
        printf("Numeros iguales o algun error");
    }
    getch();
    return 0;
}