#include <stdio.h>

int main(int argc, char const *argv[])
{
    int nilai[3];
    float rata;

    printf("matematika: ");
    scanf("%d", &nilai[0]);
    printf("fisika: ");
    scanf("%d", &nilai[1]);
    printf("kimia: ");
    scanf("%d", &nilai[2]);

    rata = (nilai[0]+nilai[1]+nilai[2])/3;

    printf("rata : %f", rata);
    return 0;
}
