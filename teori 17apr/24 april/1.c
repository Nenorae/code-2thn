#include <stdio.h>
float totalan(int jumlah, float harga);
float diskon(float total);

int main(int argc, char const *argv[])
{
    int jumlah;
    float harga;
   printf("masukan jumlah barang: ");
   scanf("%d", &jumlah);
   printf("masukan harga barang: ");
   scanf("%f", &harga);
        
    float total = totalan(jumlah, harga);
    float totalakhir = diskon(total);

    printf("harga akhir adalah: %.2f", totalakhir);
    
    return 0;
}



float totalan(int jumlah, float harga){
    return jumlah * harga;
}

float diskon(float total){
    if (total > 150000)
    {
        return total * 0.5;
    } else{
        return total;
    }
    
}