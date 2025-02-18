#include <stdio.h>
#define maks 256

int main(int argc, char const *argv[])
{
    int i, jumkar=0;
    char teks[maks];

    printf("masukan karakter maks 255: ");
    scanf(" %c", &teks);

    for ( i = 0; i < teks ; i++)
    {
        jumkar++;
    }

    printf("jumlahnya %d", jumkar);
    
    return 0;
}
