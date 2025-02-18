#include <stdio.h>

int main() {

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 7; j++) {
            if (j < 3) {
                printf("* ");
            } else {
                printf("- ");
            }
        }
        printf("\n");
    }
    for (int i = 2; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            printf("- ");
        }
        printf("\n");
    }
    

    return 0;
}
