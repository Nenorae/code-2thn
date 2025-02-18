#include <stdio.h>

int angka;
int main(int argc, char const *argv[])
{
    printf("masukan angka: \n");
    scanf("%d", &angka);

    if (angka == 1)
    {
        printf("senin");
    } else if (angka == 2)
    {
        printf("selasa \n");
    } else if (angka == 3)
    {
        printf("rabu \n");
    } else if (angka == 4)
    {
        printf("kamis \n");
    }else if (angka == 5)
    {
        printf("jumat \n");
    } else if (angka == 6)
    {
        printf("sabtu \n");
    } else if (angka == 7)
    {
        printf("minggu \n");
    }else {
        printf("angka tidak valdi");
    }
    
    
    return 0;
}
