#include <stdio.h>
int toko, bulan, pemasukan, total, sum = 0;

int main(int argc, char const *argv[])
{
    printf("masukan jumlah toko: ");
    scanf("%d", &toko);
    printf("masukan jumlah bulan: ");
    scanf("%d", &bulan);

    for (int i = 1; i <= toko ; i++)
    {
        printf("toko %d \n", i);
        for (int j = 1; j <= bulan; j++)
        {
            printf("penjualan bulan ke %d: ", j);
            scanf("%d", &pemasukan);
            if (pemasukan <= 400)
            {
                printf("kecil");
            }else if (pemasukan >= 400 && pemasukan <= 600)
            {
                printf("sedang");
            }else if (pemasukan > 600)
            {
                printf("tinggi");
            }
            
            
            
        }
        
    }
    
    return 0;
}
