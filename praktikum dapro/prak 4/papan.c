#include <stdio.h>

int main(int argc, char const *argv[])
{
    float totalbelanja, diskon, harga;
    char kodebarang;

    printf("harga barang adalah: ");
    scanf("%f", &harga);

    printf("kode barang adalah: ");
    scanf(" %c", &kodebarang);

    if (harga>=100000)
    {
        if (kodebarang== 'B')
        {
            diskon=0.1*harga;
            printf("selamat anda menjadi member ");
        }
        else{
            diskon=0.1*harga;
            printf("maaf belum member");
        }
    }
    else{
        diskon=0.05*harga;
    }
    totalbelanja= harga-diskon;
    printf("diskon sebesar %f \n", diskon);
    printf("total harga yang harus dibayar pelanggan adalah %f", totalbelanja);
    return 0;
}
