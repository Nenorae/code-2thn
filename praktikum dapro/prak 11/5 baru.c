#include <stdio.h>

int main()
{
    int array1[5] = {10, 25, 35, 45, 50};
    int array2[5], i;
    int *ip1, *ip2 = array2;
    int *akhir = &array1[5];

    // Menyalin nilai dari array1 ke array2 dan mencetak alamat dan nilai yang ditransfer
    for (ip1 = &array1[0]; ip1 < akhir; ip1++)
    {
        printf("Menyalin nilai %d dari alamat %p ke alamat %p\n", *ip1, (void *)ip1, (void *)ip2);
        *ip2++ = *ip1;
    }

    // Menampilkan nilai dan alamat array2
    for (i = 0; i < 5; i++)
    {
        printf("array2[%d] = %d (alamat: %p)\n", i, array2[i], (void *)&array2[i]);
    }

    // Menampilkan alamat pointer setelah loop
    printf("Alamat pointer ip1 setelah loop: %p\n", (void *)ip1);
    printf("Alamat pointer ip2 setelah loop: %p\n", (void *)ip2);

    return 0;
}
