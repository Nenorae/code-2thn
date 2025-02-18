#ifndef USER_H
#define USER_H

#define USER_BUFFER_SIZE 50

typedef struct
{
    char username[USER_BUFFER_SIZE];
    char password[USER_BUFFER_SIZE];
} User;

extern User *users;
extern int userCount;

void initializeUsers();
void loadUsersFromFile();
void saveUsersToFile();
void registerUser();
void loginWithFlag(int *isAdmin, char *currentUser); // Menambahkan parameter untuk nama pengguna yang sedang login
void login();

#endif