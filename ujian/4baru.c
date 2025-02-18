#include <stdio.h>

int main()
{
    int banyakBuku = 10; // Jumlah buku yang tersedia
    int pinjam, kembali;
    int *bukuPtr = &banyakBuku; // Pointer ke variabel banyakBuku

    printf("Alamat memori penyimpan data banyakBuku: %p\n", (void *)bukuPtr); // Menampilkan alamat memori

    printf("Banyak buku sebelum dipinjam: %d\n", *bukuPtr);

    printf("Masukkan jumlah buku yang ingin dipinjam: ");
    scanf("%d", &pinjam);

    *bukuPtr -= pinjam; // Kurangi jumlah buku yang tersedia dengan pointer

    printf("Banyak buku saat ini: %d\n", *bukuPtr);

    printf("Masukkan jumlah buku yang ingin dikembalikan: ");
    scanf("%d", &kembali);

    *bukuPtr += kembali; // Tambah jumlah buku yang tersedia dengan pointer

    printf("Banyak buku setelah pengembalian: %d\n", *bukuPtr);

    return 0;
}
