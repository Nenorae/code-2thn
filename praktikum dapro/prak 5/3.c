#include <stdio.h>

int main() {
    int secretNumber = 50; 
    int guess;

    do {
        printf("tebak (1-100): ");
        scanf("%d", &guess);

        if (guess > secretNumber) {
            printf("kebesaran\n");
        } else if (guess < secretNumber) {
            printf("kekecilan\n");
        } else {
            printf("100\n");
            break; 
        }
    } while (1); 

    return 0;
}
