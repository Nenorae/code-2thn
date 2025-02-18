#include <stdio.h>

int kali(int a, int b)
{
    return (a * b);
}
int tambah(int a, int b)
{
    return (a + b);
}
int kurang(int a, int b)
{
    return (a - b);
}
int bagi(int a, int b)
{
    return (a / b);
}

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Masukkan angka a = ");
    scanf("%d", &a);
    printf("Masukkan angka b = ");
    scanf("%d", &b);
    printf("Hasil perkalian adalah %d \n", kali(a, b));
    printf("Hasil pertambahan adalah %d \n", tambah(a, b));
    printf("Hasil pengurangan adalah %d \n", kurang(a, b));
    printf("Hasil pembagian adalah %d \n", bagi(a, b));
    return 0;
}