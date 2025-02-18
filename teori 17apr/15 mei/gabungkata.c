#include <stdio.h>
#include <string.h>

int main()
{
    char kata1[50], kata2[50], hasil[100];

    printf("Masukkan kata pertama: ");
    scanf("%s", kata1);

    printf("Masukkan kata kedua: ");
    scanf("%s", kata2);

    strcpy(hasil, kata1);
    strcat(hasil, kata2);


    printf("Hasil penggabungan: %s\n", hasil);

    hasil[5]= 'l';

    printf("hasil setelah dicadelkan: %s\n", hasil);

    printf("Jumlah huruf hasil penggabungan: %lu\n", strlen(hasil));

    return 0;
}
