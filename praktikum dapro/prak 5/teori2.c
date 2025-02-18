#include <stdio.h>
int i, jual, totaljual =0;
float ratajual;
int main(int argc, char const *argv[])
{
    for ( i = 1; i <= 7; i++)
    {
        printf("penjualan pada hari ke-%d\n", i);
        printf("masukan penjualan: ");
        scanf("%d", &jual);
        totaljual += jual;
        ratajual = totaljual/i;
    }
    printf("%d",i);
    printf("totalan adalah %d\n", totaljual);
    printf("rerata adalah %f\n", ratajual);

    return 0;
}
