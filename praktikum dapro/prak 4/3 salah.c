#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Meminta pengguna untuk memasukkan tiga bilangan
    printf("Masukkan tiga bilangan: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Mengecek bilangan terkecil menggunakan nested if
    if (num1 <= num2) {
        if (num1 <= num3) {
            printf("Bilangan terkecil: %d\n", num1);
        } else {
            printf("Bilangan terkecil: %d\n", num3);
        }
    } else {
        if (num2 <= num3) {
            printf("Bilangan terkecil: %d\n", num2);
        } else {
            printf("Bilangan terkecil: %d\n", num3);
        }
    }

    return 0;
}
