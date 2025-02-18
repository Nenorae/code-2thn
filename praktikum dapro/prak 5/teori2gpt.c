#include <stdio.h>
int main() {
    int jual[7], totaljual = 0;
    float ratajual;

    for (int i = 0; i < 7; i++) {
        printf("penjualan pada hari ke-%d\n", i + 1);  // Fixed indexing to start from 1
        printf("masukan penjualan: ");
        scanf("%d", &jual[i]);
        totaljual += jual[i];
    }

    ratajual = (float)totaljual / 7;  // Calculate average using float division
    printf("totalan adalah %d\n", totaljual);  // Print total sales
    printf("rerata adalah %.2f\n", ratajual);  // Print average with 2 decimal places

    return 0;
}
