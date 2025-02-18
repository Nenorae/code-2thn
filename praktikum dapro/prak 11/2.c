#include <stdio.h>

int main()
{
    int a = 16, b = 20, *ia, *ib;
    ia = &a;
    ib = &b;

    // Printing initial alamates
    printf("lokasi memory awal:\n");
    printf("alamat a: %p\n", (void *)&a);
    printf("alamat b: %p\n", (void *)&b);
    printf("alamat ia: %p\n", (void *)&ia);
    printf("alamat ib: %p\n", (void *)&ib);
    printf("nilai ia (alamat a): %p\n", (void *)ia);
    printf("nilai ib (alamat b): %p\n", (void *)ib);

    *ia = 5;

    // Printing alamates after *ia=5;
    printf("\nsetelah *ia=5:\n");
    printf("alamat a: %p, nilai a: %d\n", (void *)&a, a);
    printf("nilai ia: %p, nilai at *ia: %d\n", (void *)ia, *ia);

    ia = ib;

    // Printing alamates after ia=ib;
    printf("\nsetelah ia=ib:\n");
    printf("alamat ia: %p, nilai ia: %p\n", (void *)&ia, (void *)ia);
    printf("nilai ib: %p, nilai at *ib: %d\n", (void *)ib, *ib);

    *ib = *ia + 7;

    // Printing alamates after *ib=*ia+7;
    printf("\nsetelah *ib=*ia+7:\n");
    printf("nilai ib: %p, nilai at *ib: %d\n", (void *)ib, *ib);

    ia = &a;

    // Printing alamates after ia=&a;
    printf("\nsetelah ia=&a:\n");
    printf("alamat ia: %p, nilai ia: %p\n", (void *)&ia, (void *)ia);

    b = *ib / 4 * 5;

    // Printing final alamates and nilais
    printf("\nnilai final:\n");
    printf("alamat a: %p, nilai a: %d\n", (void *)&a, a);
    printf("alamat b: %p, nilai b: %d\n", (void *)&b, b);
    printf("nilai ia: %p, nilai at *ia: %d\n", (void *)ia, *ia);
    printf("nilai ib: %p, nilai at *ib: %d\n", (void *)ib, *ib);

    printf("nilai final: a=%d, b=%d, *ia=%d, *ib=%d\n", a, b, *ia, *ib);
    return 0;
}
