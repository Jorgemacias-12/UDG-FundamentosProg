#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <locale.h>

void clearScreen()
{
#ifdef __linux__
    system("clear");
#elif _WIN32
    system("cls");
#endif
}

void createContact()
{
    FILE *schedule;
    char contactName[50];
    char contactAddress[50];
    char contactPhone[12];
    char contactEmail[50];
    char contactJob[50];
    printf("| Nombre del contacto: ");
    scanf("%s", &contactName);
    printf("| Direccion del contacto: ");
    scanf("%s", &contactAddress);
    printf("| Telefono del contacto: ");
    scanf("%s", &contactPhone);
    printf("| Email del contacto: ");
    scanf("%s", &contactEmail);
    printf("| Trabajo del contacto: ");
    scanf("%s", &contactJob);
    schedule = fopen("contacts.txt", "a+");
    fprintf(schedule, "%s %s %s %s %s", contactName, contactAddress, contactPhone, contactEmail, contactJob);
    fprintf(schedule, "\n");
    fclose(schedule);
    printf("|---------- Contacto creado ---------|\n");
    printf("|------------- Debug ----------------|\n");
    printf("| %s\n", contactName);
    printf("| %s\n", contactAddress);
    printf("| %s\n", contactPhone);
    printf("| %s\n", contactEmail);
    printf("| %s\n", contactJob);
}

void menu()
{
menu:
    int option = 0;
    printf("|---------- Agenda ----------|\n");
    printf("| 1.- Crear contacto\n");
    printf("| Opcion: ");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        createContact();
        break;
    default:
        printf("| Opcion invalida |\n");
        goto menu;
        break;
    }
}

int main()
{
    setlocale(LC_ALL, "C");
    menu();
    getch();
    return 0;
}