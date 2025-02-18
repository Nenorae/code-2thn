#include <stdio.h>

// Fungsi untuk mencari nilai terbesar dari 3 inputan
int cariNilaiTerbesar(int a, int b, int c) {
    int nilaiTerbesar = a; // Anggap nilai terbesar awalnya adalah a

    // Membandingkan nilaiTerbesar dengan b dan c
    if (b > nilaiTerbesar) {
        nilaiTerbesar = b;
    }
    if (c > nilaiTerbesar) {
        nilaiTerbesar = c;
    }

    return nilaiTerbesar;
}

int main() {
    int num1, num2, num3;

    printf("Masukkan 3 buah bilangan: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Memanggil fungsi cariNilaiTerbesar dengan 3 inputan
    int terbesar = cariNilaiTerbesar(num1, num2, num3);

    printf("Nilai terbesar adalah %d\n", terbesar);

    return 0;
}
