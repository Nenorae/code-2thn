#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "user.h"

#define INITIAL_CAPACITY 10

User *users = NULL;
int userCount = 0;
int capacity = 0;

void initializeUsers()
{
    capacity = INITIAL_CAPACITY;
    users = (User *)malloc(capacity * sizeof(User));
    if (users == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    // Inisialisasi pengguna admin
    strcpy(users[0].username, "admin");
    strcpy(users[0].password, "1234");
    userCount++;
}

void saveUsersToFile()
{
    FILE *file = fopen("users.txt", "w");
    if (file == NULL)
    {
        printf("Error opening file.\n");
        return;
    }

    for (int i = 0; i < userCount; i++)
    {
        fprintf(file, "%s %s\n", users[i].username, users[i].password);
    }

    fclose(file);
}

void loadUsersFromFile()
{
    FILE *file = fopen("users.txt", "r");
    if (file == NULL)
    {
        printf("File not found, creating a new one.\n");
        file = fopen("users.txt", "w");
        if (file == NULL)
        {
            printf("Error creating file.\n");
            exit(1);
        }
        fclose(file);
        return;
    }

    // Check if file is empty
    fseek(file, 0, SEEK_END);
    long fileSize = ftell(file);
    fseek(file, 0, SEEK_SET);

    if (fileSize == 0)
    {
        printf("File is empty.\n");
        fclose(file);
        return;
    }

    // Reset userCount and capacity
    userCount = 0;
    capacity = INITIAL_CAPACITY;

    // Initial memory allocation
    users = (User *)malloc(capacity * sizeof(User));
    if (users == NULL)
    {
        printf("Memory allocation failed.\n");
        fclose(file);
        exit(1);
    }

    // Read data from file
    while (fscanf(file, "%s %s", users[userCount].username, users[userCount].password) != EOF)
    {
        userCount++;
        if (userCount >= capacity)
        {
            // Reallocate memory if capacity is exceeded
            capacity *= 2;
            users = (User *)realloc(users, capacity * sizeof(User));
            if (users == NULL)
            {
                printf("Memory allocation failed.\n");
                fclose(file);
                exit(1);
            }
        }
    }

    fclose(file);
}

void registerUser()
{
    if (userCount >= capacity)
    {
        // Reallocate memory if capacity is exceeded
        capacity *= 2;
        users = (User *)realloc(users, capacity * sizeof(User));
        if (users == NULL)
        {
            printf("Memory allocation failed.\n");
            exit(1);
        }
    }

    printf("Register New User\n");
    printf("Username: ");
    scanf("%s", users[userCount].username);
    printf("Password: ");
    scanf("%s", users[userCount].password);
    userCount++;
    printf("User registered successfully!\n");

    // Save users to file
    saveUsersToFile();
}

void login()
{
    char username[USER_BUFFER_SIZE];
    char password[USER_BUFFER_SIZE];
    printf("Login\n");
    printf("Username: ");
    scanf("%s", username);
    printf("Password: ");
    scanf("%s", password);

    for (int i = 0; i < userCount; i++)
    {
        if (strcmp(username, users[i].username) == 0 && strcmp(password, users[i].password) == 0)
        {
            printf("Login successful!\n");
            return;
        }
    }
    printf("Login failed. Invalid credentials.\n");
}

void loginWithFlag(int *isAdmin, char *currentUser)
{
    char username[USER_BUFFER_SIZE];
    char password[USER_BUFFER_SIZE];
    printf("Login\n");
    printf("Username: ");
    scanf("%s", username);
    printf("Password: ");
    scanf("%s", password);

    for (int i = 0; i < userCount; i++)
    {
        if (strcmp(username, users[i].username) == 0 && strcmp(password, users[i].password) == 0)
        {
            printf("Login successful!\n");
            *isAdmin = (strcmp(username, "admin") == 0) ? 1 : 0; // Jika username adalah "admin", set isAdmin ke 1
            strcpy(currentUser, username); // Menyimpan nama pengguna yang sedang login
            return;
        }
    }
    printf("Login failed. Invalid credentials.\n");
}