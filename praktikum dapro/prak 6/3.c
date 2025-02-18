#include <stdio.h>

int main() {
    int jumlahMahasiswa, nilai, total = 0, jumlahValid = 0;
    float rataRata;

    
    do {
        printf("berapa mahasiswa: ");
        scanf("%d", &jumlahMahasiswa);
        total = 0; // Reset total untuk setiap iterasi
        jumlahValid = 0; // Reset jumlahValid untuk setiap iterasi

        for (int i = 1; i <= jumlahMahasiswa; i++) {
            printf("nilai mahasiswa ke-%d: ", i);
            scanf("%d", &nilai);

            if (nilai < 0) {
                printf("Masukkan nilai positif.\n");
                i--; // Mengurangi i agar input nilai negatif tidak dihitung
                continue; // Melanjutkan perulangan tanpa menjumlahkan nilai
            }

            total += nilai;
            jumlahValid++;
        }

        if (jumlahValid > 0) {
            rataRata = (float)total / jumlahValid;
            printf("Total: %d\n", total);
            printf("Rerata: %.2f\n", rataRata);
        } else {
            printf("data ga valdi\n");
        }

        printf("lanjut?...");
        getchar(); // Menunggu input dari pengguna
        printf("\n"); // Baris baru setelah input
    } while (getchar() == '\n'); // Melanjutkan perulangan jika yang ditekan adalah enter

    return 0;
}
