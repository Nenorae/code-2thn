#include <stdio.h>

int main() {
    double totalbelanja, diskon, harga;
    char kodebarang;

    printf("harga barang adalah: ");
    scanf("%lf", &harga); // Use %lf for double
    getchar(); // Consume the newline character left by scanf

    printf("kode barang adalah: ");
    scanf(" %c", &kodebarang); // Add a space before %c to consume whitespace/newline

    if (harga >= 100000) {
        if (kodebarang == 'B') {
            diskon = 0.1 * harga;
            printf("Selamat anda menjadi member\n");
        } else {
            diskon = 0.05 * harga; // Change the discount for non-member
            printf("Maaf, belum member\n");
        }
    } else {
        diskon = 0.05 * harga;
    }
    totalbelanja = harga - diskon;
    printf("Diskon sebesar %.2f \n", diskon); // Use %.2f to display only two decimal places
    printf("Total harga yang harus dibayar pelanggan adalah %.2f\n", totalbelanja);

    return 0;
}

