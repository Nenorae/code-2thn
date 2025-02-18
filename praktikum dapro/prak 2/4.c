#include <stdio.h>
int panjang, lebar, tinggi, volume;

int main(int argc, char const *argv[])
{
    printf("masukan panjang, lebar dan tinggi\n");
    printf("panjang cm: \n");
    scanf("%d", &panjang);
    printf("lebar cm: \n");
    scanf("%d", &lebar);
    printf("tinggi cm: \n");
    scanf("%d", &tinggi);
    
    volume = panjang*lebar*tinggi;

    printf("jadi volumenya adalah %d cm kubik",volume);

    return 0;
}
