// user.h
#ifndef USER_H
#define USER_H

#define USER_BUFFER_SIZE 100

typedef struct
{
    char username[USER_BUFFER_SIZE];
    char password[USER_BUFFER_SIZE];
} User;

extern User *users;
extern int userCount;
extern int capacity;

void initializeUsers();
void saveUsersToFile();
void loadUsersFromFile();
void registerUser();
void loginWithFlag(int *isAdmin); // Menambahkan parameter untuk flag isAdmin

#endif
