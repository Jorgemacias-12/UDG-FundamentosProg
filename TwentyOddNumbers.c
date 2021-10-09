#include <stdio.h>
#include <conio.h>

int main()
{
    int result;
    printf("Sumando los primeros 20 numeros impares\n");
    for (int i = 0; i < 20; i++) 
    {
        if (i %2 != 0) 
        {
            result += i;
            printf("%d\n", i);
        }
    }
    printf("Resultado: %d\n", result);
    getch();
    return 0;
}