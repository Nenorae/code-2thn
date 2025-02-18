#include <stdio.h>

// Fungsi untuk menukar dua bilangan menggunakan pointer
void swap(int *a, int *b) {
    int temp = *a; // Menyimpan nilai dari a ke dalam variabel temp
    *a = *b; // Mengganti nilai a dengan nilai b
    *b = temp; // Mengganti nilai b dengan nilai temp (nilai awal a)
}

int main() {
    int num1, num2;

    printf("Masukkan dua bilangan: ");
    scanf("%d %d", &num1, &num2);

    printf("Sebelum menukar: num1 = %d, num2 = %d\n", num1, num2);

    // Memanggil fungsi swap dengan menyertakan alamat dari num1 dan num2
    swap(&num1, &num2);

    printf("Setelah menukar: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
