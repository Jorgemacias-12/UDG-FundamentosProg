#include <stdio.h>
#include <conio.h>

int main()
{
    int letters[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', (char)164, 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', (char) 32};
    int letterCount = 0;
    char userInput[1024];
    char *Address = &userInput[0];
    printf("Inserte aqui un string\n");
    gets(userInput);
    while (*Address != 0)
    {
        for (int i = 0; i < 27; i++)
        {
            if (*Address == letters[i])
            {
                letterCount++;
            }
        }
        Address++;
    }
    printf("El string tiene %d letras", letterCount);
    getch();
    return 0;
}