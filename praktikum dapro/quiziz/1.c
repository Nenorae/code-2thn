#include <stdio.h>

int main() {
    char nama[50];
    char alamat[100];
    float jarak;

    // Input data dari keyboard
    printf("Masukkan Nama: ");
    scanf("%[^\n]%*c", nama);

    printf("Masukkan Alamat Rumah: ");
    scanf("%[^\n]%*c", alamat);

    printf("Masukkan Jarak dari Rumah ke Kampus (km): ");
    scanf("%f", &jarak);

    // Cek syarat jarak
    if (jarak <= 10) {
        printf("Selamat, Anda memenuhi syarat untuk mendaftar!\n");
    } else {
        printf("Maaf, Anda tidak memenuhi syarat untuk mendaftar.\n");
    }

    return 0;
}
