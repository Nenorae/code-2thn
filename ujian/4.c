#include <stdio.h>

int main()
{
    int banyakBuku = 10; // Jumlah buku yang tersedia
    int pinjam, kembali;
    int *bukuPtr = &banyakBuku; // Pointer ke variabel banyakBuku

    printf("banyak buku saat ini: %d\n", *bukuPtr);
    printf("alamat banyak buku %p \n", bukuPtr);

    printf("mau pinjam berapa: ");
    scanf("%d", &pinjam);

    *bukuPtr -= pinjam; // Kurangi jumlah buku yang tersedia dengan pointer

    printf("Banyak buku saat ini: %d\n", *bukuPtr);

    printf("mengembalikan berapa: ");
    scanf("%d", &kembali);

    *bukuPtr += kembali; // Tambah jumlah buku yang tersedia dengan pointer

    printf("Banyak buku setelah pengembalian: %d\n", *bukuPtr);

    return 0;
}
