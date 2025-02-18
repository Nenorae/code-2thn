// main.c
#include <stdio.h>
#include <stdlib.h>
#include "user.h"
#include "service.h"
#include "sparepart.h"

int main()
{
    initializeUsers();
    loadUsersFromFile();
    initializeServices();
    initializeSpareparts();
    loadSparepartsFromFile();

    int choice;
    int isAdmin = 0; // Flag untuk menandai apakah pengguna adalah admin
    char currentUser[USER_BUFFER_SIZE] = ""; // Variabel untuk menyimpan nama pengguna yang sedang login

    do
    {
        printf("\nMenu\n");
        if (currentUser[0] != '\0')
        {
            printf("Logged in as: %s\n", currentUser);
        }
        printf("1. Register User\n");
        printf("2. Login\n");
        printf("3. Add Sparepart\n");
        printf("4. List Spareparts\n");
        printf("5. Order Service\n");
        printf("6. List Ordered Services\n");
        printf("7. Make Payment\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            registerUser();
            break;
        case 2:
            loginWithFlag(&isAdmin, currentUser); // Menambahkan parameter untuk nama pengguna yang sedang login
            break;
        case 3:
            if (isAdmin)
            {
                addSparepart();
            }
            else
            {
                printf("Only admins can add spareparts.\n");
            }
            break;
        case 4:
            listSpareparts();
            break;
        case 5:
            orderService();
            break;
        case 6:
            listOrderItems();
            break;
        case 7:
            makePayment(isAdmin);
            break;
        case 8:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 8);

    free(users);
    free(spareparts);
    return 0;
}