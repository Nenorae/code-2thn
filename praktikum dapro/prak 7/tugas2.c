#include <stdio.h>

void ubah(int *);
int main(int argc, char const *argv[])
{
    int x;

    printf("masukan nilai x: ");
    scanf("%d", &x); // Perbaikan: gunakan &x untuk alamat variabel x
    ubah(&x); // Perbaikan: kirim alamat x ke fungsi ubah
    printf("x=%d\n", x);

    return 0;
}

void ubah(int *y)
{
    *y = 85; // Perbaikan: ubah nilai di alamat yang diberikan
}
