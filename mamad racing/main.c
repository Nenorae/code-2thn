// main.c
#include <stdio.h>
#include <stdlib.h>
#include "user.h"
#include "service.h"
#include "sparepart.h"
#include "order.h"

int main()
{
    initializeUsers();
    loadUsersFromFile();
    initializeServices();
    initializeSpareparts();
    loadSparepartsFromFile();

    int choice;
    int isAdmin = 0; // Flag untuk menandai apakah pengguna adalah admin
    do
    {
        printf("\nMenu\n");
        printf("1. Register User\n");
        printf("2. Login\n");
        printf("3. Add Sparepart\n");
        printf("4. List Spareparts\n");
        printf("5. Order Service\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            registerUser();
            break;
        case 2:
            loginWithFlag(&isAdmin); // Menambahkan parameter untuk flag isAdmin
            break;
        case 3:
            addSparepart();
            break;
        case 4:
            listSpareparts();
            break;
        case 5:
            orderService();
            break;
        case 6:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    free(users);
    free(spareparts);
    return 0;
}
