#include <stdio.h>

int main() {
    int n, gaji = 0, totalGaji = 0; // Tambahkan variabel totalGaji
    char karyawan;

    printf("Berapa karyawan: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int validInput = 0; // Flag to track valid input
        while (!validInput) { // Loop until valid input is provided
            printf("Masukkan posisi (M/Magang, S/Staf, K/KepalaDivisi) karyawan ke-%d: ", i);
            scanf(" %c", &karyawan);

            switch (karyawan) {
                case 'M':
                case 'm':
                    gaji = 0;
                    validInput = 1; // Set flag to true for valid input
                    break;
                case 'S':
                case 's':
                    gaji = 2000;
                    validInput = 1; // Set flag to true for valid input
                    break;
                case 'K':
                case 'k':
                    gaji = 4000;
                    validInput = 1; // Set flag to true for valid input
                    break;
                default:
                    printf("Posisi karyawan tidak valid. Masukkan kembali.\n");
            }
        }

        totalGaji += gaji; // Tambahkan gaji karyawan ke totalGaji
        printf("Gaji: %d\n", gaji);
    }

    printf("Total Gaji Semua Karyawan: %d\n", totalGaji); // Print total gaji semua karyawan
    return 0;
}
