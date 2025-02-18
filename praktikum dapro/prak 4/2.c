#include <stdio.h>

int main() {
    char huruf;
    int nilai_angka;

    printf("Masukkan huruf: ");
    scanf("%c", &huruf);

    switch (huruf) {
        case 'A':
            nilai_angka = 4;
            break;
        case 'B':
            nilai_angka = 3;
            break;
        case 'C':
            nilai_angka = 2;
            break;
        case 'D':
            nilai_angka = 1;
            break;
        case 'E':
            nilai_angka = 0;
            break;
        default:
            printf("Huruf yang dimasukkan tidak valid.\n");
            return 1; 

    }
    printf("Nilai angka untuk huruf %c adalah: %d\n", huruf, nilai_angka);

    return 0;
}
