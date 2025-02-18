#include <stdio.h>
int main()
{
    int x = 3, y = 4, z = 5;
    int *ix;
    int *iy;
    ix = &x;
    iy = &y;

    printf("sebelum modifikasis:\n");
    printf("alamat  x: %p, nilai of x: %d\n", (void *)&x, x);
    printf("alamat  y: %p, nilai  y: %d\n", (void *)&y, y);
    printf("alamat  z: %p, nilai  z: %d\n", (void *)&z, z);
    printf("alamat  ix: %p, nilai  ix: %p\n", (void *)&ix, (void *)ix);
    printf("alamat  iy: %p, nilai  iy: %p\n", (void *)&iy, (void *)iy);

    *ix = 6;
    *iy = *ix + z;
    z = x + y;

    printf("setelah modif:\n");
    printf("alamat  x: %p, nilai  x: %d\n", (void *)&x, x);
    printf("alamat  y: %p, nilai  y: %d\n", (void *)&y, y);
    printf("alamat  z: %p, nilai  z: %d\n", (void *)&z, z);
    printf("alamat  ix: %p, nilai  ix: %p\n", (void *)&ix, (void *)ix);
    printf("alamat  iy: %p, nilai  iy: %p\n", (void *)&iy, (void *)iy);

    printf("x = %d, y = %d, z=%d\n", x, y, z);
}