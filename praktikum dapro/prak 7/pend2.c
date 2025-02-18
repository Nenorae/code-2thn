#include <stdio.h>

// Deklarasi fungsi untuk menghitung luas lingkaran
float hitungLuas(float radius) {
    float pi = 3.14159;
    return pi * radius * radius;
}

// Deklarasi fungsi untuk menghitung keliling lingkaran
float hitungKeliling(float radius) {
    float pi = 3.14159;
    return 2 * pi * radius;
}

int main() {
    float radius;
    printf("Masukkan nilai radius lingkaran: ");
    scanf("%f", &radius);

    // Memanggil fungsi untuk menghitung luas dan keliling lingkaran
    float luas = hitungLuas(radius);
    float keliling = hitungKeliling(radius);

    printf("Luas lingkaran: %.2f\n", luas);
    printf("Keliling lingkaran: %.2f\n", keliling);

    return 0;
}
