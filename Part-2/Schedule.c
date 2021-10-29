//----- LIBRERIAS -----
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

struct Contact
{
    char contactName[50];
    char contactAddress[50];
    char contactPhone[12];
    char contactEmail[50];
    char contactJob[50];
} Contact;

void createContact()
{
    FILE *schedule;
    struct Contact contact;
    printf("| Nombre del contacto: ");
    scanf("%s[^\n]",&contact.contactName);
    printf("| Direccion del contacto: ");
    scanf("%s[^\n]", &contact.contactAddress, 50, stdin);
    printf("| Telefono del contacto: ");
    scanf("%s[^\n]", &contact.contactPhone, 12, stdin);
    printf("| Email del contacto: ");
    scanf("%s[^\n]", &contact.contactEmail, 50, stdin);
    printf("| Trabajo del contacto: ");
    scanf("%s[^\n]", &contact.contactJob, 50, stdin);
    schedule = fopen("contacts.txt", "a+");
    fprintf(schedule, "%s %s %s %s %s", contact.contactName, contact.contactAddress, contact.contactPhone, contact.contactEmail, contact.contactJob);
    fprintf(schedule, "\n");
    fclose(schedule);
    printf("|---------- Contacto creado ---------|\n");
    printf("|------------- Debug ----------------|\n");
    printf("| %s\n", contact.contactName);
    printf("| %s\n", contact.contactAddress);
    printf("| %s\n", contact.contactPhone);
    printf("| %s\n", contact.contactEmail);
    printf("| %s\n", contact.contactJob);
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
    //----- VARIABLE DE REPETICIÓN -----
    char bucle;

    //----- BUCLE DE REPETICION -----
    do
    {
        //----- LLAMAR MENU -----
        setlocale(LC_ALL, "C");
        menu();

        //----- CONFIRMAR O DENEGAR VUELTA -----
        puts("\nDESEA VOLVER A USAR EL PROGRAMA : (S/N)");
        printf("==> ");
        scanf("%s", &bucle);
        system("cls");
    } while (bucle == 's' || bucle == 'S');
    getch();
    return 0;
}