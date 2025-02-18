#include <stdio.h>

int pilihan;
float alas, tinggi, luas, panjang, lebar, panjangpersegi, lebarpersegi;
int main(int argc, char const *argv[])
{
    printf("program hitung pintar \n");
    printf("1 untuk luas segitiga \n");
    printf("2 untuk luas persegi panjang \n");
    printf("3 untuk luas bujur sangkar \n");

    printf("masukan pilihan anda: ");
    scanf("%d", &pilihan);

    if (pilihan == 1)
    {
        printf("masukan alas: ");
        scanf("%f", &alas);
        printf("masukan tinggi: ");
        scanf("%f", &tinggi);
        luas = 0.5*alas*tinggi;

        printf("luas segitiga adalah: %f\n", luas);
    } else if (pilihan == 2)
    {
        printf("masukan panjang: ");
        scanf("%f", &panjang);
        printf("masukan lebar: ");
        scanf("%f", &lebar);
        luas = panjang*lebar;

        printf("luas bujur sangkar adalah: %f\n", luas);
    }else if (pilihan == 3)
    {
        printf("masukan panjang: ");
        scanf("%f", &panjangpersegi);
        printf("masukan lebar: ");
        scanf("%f", &lebarpersegi);
        luas = panjangpersegi*lebarpersegi;

        printf("luas bujur sangkar adalah: %f\n", luas);
    } else {
        printf("angka tidak novaldi");
        return 1;
    }
    
    
    
    return 0;
}
