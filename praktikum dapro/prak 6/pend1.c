#include <stdio.h>

int main() {
    int m ; // Number of rows
    int n ; // Number of columns
    char letter; // Letter to print

    // Loop through rows
    printf("masukan nilai m: ");
    scanf("%d",&m);
    printf("masukan nilai n: ");
    scanf("%d",&n);
    printf("masukan huruf loop: ");
    scanf(" %c",&letter);

    for (int i = 0; i < m; i++) {
        // Loop through columns
        for (int j = 0; j < n; j++) {
            // Print the letter
            printf("%c ", letter);
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
