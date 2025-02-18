#include <stdio.h>

// Fungsi ganjil() untuk mengecek apakah sebuah bilangan ganjil atau bukan
int ganjil(int num) {
    if (num % 2 != 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int angka;

    printf("Masukkan suatu bilangan: ");
    scanf("%d", &angka);


    int hasil = ganjil(angka);

    if (hasil == 1) {
        printf("Bilangan %d adalah ganjil\n", angka);
    } else {
        printf("Bilangan %d bukan ganjil\n", angka);
    }

    return 0;
}
  