#include <stdio.h>

// Fungsi untuk menjumlahkan data dan mengembalikan total jumlah
int total(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

// Fungsi untuk menghitung rata-rata dari data-data yang dijumlahkan
float rataRata(int arr[], int n) {
    int sum = total(arr, n); // Memanggil fungsi total untuk mendapatkan total jumlah
    return (float)sum / n; // Menghitung rata-rata dan mengembalikannya
}

int main() {
    int n;
    printf("Masukkan jumlah data: ");
    scanf("%d", &n);

    int data[n];
    printf("Masukkan %d data:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &data[i]);
    }

    int sum = total(data, n); // Memanggil fungsi total untuk menjumlahkan data
    float average = rataRata(data, n); // Memanggil fungsi rataRata untuk menghitung rata-rata

    printf("Total jumlah data adalah: %d\n", sum);
    printf("Rata-rata data adalah: %.2f\n", average);

    return 0;
}
