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

typedef struct
{
    Service service;
    int quantity;
} OrderItem;

OrderItem orderItems[50];
int orderItemCount = 0;

void initializeServices()
{
    serviceCount = 0;
    strcpy(services[serviceCount].serviceName, "Oil Change");
    services[serviceCount].price = 150.0;
    serviceCount++;
    
    strcpy(services[serviceCount].serviceName, "Brake Inspection");
    services[serviceCount].price = 100.0;
    serviceCount++;
    
    strcpy(services[serviceCount].serviceName, "Engine Tuning");
    services[serviceCount].price = 200.0;
    serviceCount++;
}

void orderService()
{
    printf("Order Service\n");
    for (int i = 0; i < serviceCount; i++)
    {
        printf("%d. %s - $%.2f\n", i + 1, services[i].serviceName, services[i].price);
    }
    int choice, quantity;
    printf("Choose a service: ");
    scanf("%d", &choice);
    if (choice > 0 && choice <= serviceCount)
    {
        printf("Enter quantity: ");
        scanf("%d", &quantity);
        orderItems[orderItemCount].service = services[choice - 1];
        orderItems[orderItemCount].quantity = quantity;
        orderItemCount++;
        printf("Service %s ordered successfully!\n", services[choice - 1].serviceName);
    }
    else
    {
        printf("Invalid choice.\n");
    }
}

void listOrderItems()
{
    printf("List of Ordered Services:\n");
    float total = 0;
    for (int i = 0; i < orderItemCount; i++)
    {
        printf("%d. %s x%d - $%.2f\n", i + 1, orderItems[i].service.serviceName, orderItems[i].quantity, orderItems[i].service.price * orderItems[i].quantity);
        total += orderItems[i].service.price * orderItems[i].quantity;
    }
    printf("Total: $%.2f\n", total);
}

float calculateTotal()
{
    float total = 0;
    for (int i = 0; i < orderItemCount; i++)
    {
        total += orderItems[i].service.price * orderItems[i].quantity;
    }
    return total;
}

void makePayment(int isAdmin)
{
    if (!isAdmin)
    {
        printf("Only admin can make a payment.\n");
        return;
    }
    
    float total = calculateTotal();
    if (total == 0)
    {
        printf("No services ordered. Payment not required.\n");
        return;
    }
    
    printf("Total amount to be paid: $%.2f\n", total);
    float amountGiven;
    printf("Enter the amount given by the user: $");
    scanf("%f", &amountGiven);

    if (amountGiven < total)
    {
        printf("Insufficient amount. Payment failed.\n");
        return;
    }

    float change = amountGiven - total;
    printf("Payment successful!\n");
    printf("Change to be given: $%.2f\n", change);

    // Clear orders after payment
    orderItemCount = 0;
}