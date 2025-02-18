#include <stdio.h>

// Function to sum even numbers in an array
int sumEven(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int n;
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    int data[n];
    printf("Masukkan %d data:", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }

    int hasil = sumEven(data, n);
    printf("Jumlah data genap adalah: %d\n", hasil);

    return 0;
}
