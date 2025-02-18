#include<stdio.h>

int nilai;
int main(int argc, char const *argv[])
{
    printf("masukan nilai anda: ");
    scanf("%d", &nilai);

    if (nilai >= 70)
    {
        printf("lulus");
    } else {
        printf("belum lulus");
    }
    
    return 0;
}
