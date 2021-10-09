#include <stdio.h>
#include <conio.h>

int main() 
{
    int base;
    int height;
    int area;
    printf("Area de trinangulo\n");
    printf("Digita base y altura de este\n");
    scanf("%d %d", &base, &height);
    area = (base * height) / 2;
    printf("Area del tringulo: %d", area);
    getch();
    return 0;
}