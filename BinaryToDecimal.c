#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int decimalNumber = 0;
    int binaryBytes[8];
    printf("Conversor binario a decimal\n");
    for (int counter = 0; counter <= 8; counter++)
    {
        scanf("%d", &binaryBytes[counter]);
    }
    int opCounter;
    for (opCounter = 0; opCounter < 8; opCounter++)
    {
        printf("Valores: {contador: %d, valor: %d}\n", opCounter, binaryBytes[opCounter]);
        decimalNumber += binaryBytes[opCounter] * pow(2, opCounter);
    }
    printf("Valor decimal: %d", decimalNumber);
    getch();
    return 0;
}