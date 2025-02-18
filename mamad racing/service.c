#include <stdio.h>
#include <string.h>
#include "service.h"

typedef struct
{
    char serviceName[50];
    float price;
} Service;

Service services[10];
int serviceCount = 0;

void initializeServices()
{
    serviceCount = 0;
    strcpy(services[serviceCount].serviceName, "Oil Change");
    services[serviceCount].price = 150.0;
    serviceCount++;
}

void orderService()
{
    printf("Order Service\n");
    for (int i = 0; i < serviceCount; i++)
    {
        printf("%d. %s - $%.2f\n", i + 1, services[i].serviceName, services[i].price);
    }
    int choice;
    printf("Choose a service: ");
    scanf("%d", &choice);
    if (choice > 0 && choice <= serviceCount)
    {
        printf("Service %s ordered successfully!\n", services[choice - 1].serviceName);
    }
    else
    {
        printf("Invalid choice.\n");
    }
}
