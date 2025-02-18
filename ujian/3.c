#include <stdio.h>

int main()
{
    int jumlahPenjualan;
    float totalPenjualan = 0, rataPenjualan;

    printf("masukan jumlah penjualan: ");
    scanf("%d", &jumlahPenjualan);

    char namaKasir[100];
    printf("masukan nama kasir: ");
    scanf(" %[^\n]s", namaKasir);

    float penjualan[jumlahPenjualan];

    for (int i = 0; i < jumlahPenjualan; i++)
    {
        printf("masukan penjualan %d: ", i + 1);
        scanf("%f", &penjualan[i]);
        totalPenjualan += penjualan[i];
    }

    rataPenjualan = totalPenjualan / jumlahPenjualan;

    printf("\nNama Kasir: %s\n", namaKasir);
    printf("Total Penjualan hari ini: %.2f\n", totalPenjualan);
    printf("Rata-rata Penjualan hari ini: %.2f\n", rataPenjualan);

    return 0;
}
