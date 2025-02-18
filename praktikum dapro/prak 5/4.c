#include <stdio.h>

int main() {
    char answer;

    do {
        printf("ayang udah solat? (S/B): ");
        scanf(" %c", &answer); 

        if (answer == 'S' || answer == 's') {
            printf("masyaAllah\n");
            break; 
        } else if (answer == 'B' || answer == 'b') {
            printf("ayo sama acuu!\n");
            break; 
        } 
    } while (1); 

    return 0;
}
