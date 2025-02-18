#include <stdio.h>

int main() {
    int num1, num2, num3, smallest;

    // Input three numbers
    printf("Masukkan tiga bilangan: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the smallest number using nested if
    if (num1 < num2) {
        if (num1 < num3) {
            smallest = num1;
        } else {
            smallest = num3;
        }
    } else {
        if (num2 < num3) {
            smallest = num2;
        } else {
            smallest = num3;
        }
    }

    // Print the smallest number
    printf("Bilangan terkecil adalah: %d\n", smallest);

    return 0;
}
