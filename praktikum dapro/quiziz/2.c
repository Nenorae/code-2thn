#include <stdio.h>

int main() {
  
    char menu[3][50] = {"Rujak Cingur", "Nasi Semanggi", "Sate Klopo"};
    int harga[3] = {10000, 15000, 20000};
    int jumlah[3] = {0};
    int total_pembayaran = 0;
    int pilihan;
    int i;

   
    printf("Menu Makanan:\n");
    for (i = 0; i < 3; i++) {
        printf("%d. %s @ Rp %d\n", i + 1, menu[i], harga[i]);
    }

   
    do {
        printf("Pilih menu (1-3, 0 untuk selesai): ");
        scanf("%d", &pilihan);

        if (pilihan >= 1 && pilihan <= 3) {
            printf("Masukkan jumlah porsi untuk %s: ", menu[pilihan - 1]);
            scanf("%d", &jumlah[pilihan - 1]);
        } else if (pilihan != 0) {
            printf("Pilihan tidak valid.\n");
        }
    } while (pilihan != 0);

   
    for (i = 0; i < 3; i++) {
        total_pembayaran += harga[i] * jumlah[i];
    }

   
    printf("Total Pembayaran: Rp %d\n", total_pembayaran);

    return 0;
}
