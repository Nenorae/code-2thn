#include <stdio.h>

int main(int argc, char const *argv[])
{
    int B;
    printf("masukan nilai B: ");
    scanf("%d", &B);

    if (B == 0)
    {
        goto  takhingga;
    }

    printf("B bukan enol");
    return 0;

    takhingga:
    printf("B = enol, jadi lompat ke sini");
    
    return 0;
}
