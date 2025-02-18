#include <stdio.h>

int main() {
    int baris, kolom,num = 1;
    printf("masukan baris: ");
    scanf("%d",&baris);
    printf("masukan kolom: ");
    scanf("%d",&kolom);
   
   
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf("%d ", num * (j + 1));
        }
        num++;
        printf("\n"); 
    }

    return 0;
}
