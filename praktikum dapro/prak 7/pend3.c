#include <stdio.h>

void hitungLuasKeliling(float radius)
{
    float pi = 3.14159;
    float luas = pi * radius * radius;
    float keliling = 2 * pi * radius;
}

int main()
{
    float radius;
    printf("Masukkan nilai radius lingkaran: ");
    scanf("%f", &radius);

    hitungLuasKeliling(radius);

    return 0;
}
