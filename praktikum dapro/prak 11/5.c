#include <stdio.h>
int main()
{
    int array1[5] = {10, 25, 35, 45, 50};
    int array2[5], i;
    int *ip1, *ip2 = array2;
    int *akhir = &array1[5];
    for (ip1 = &array1[0]; ip1 < akhir; ip1++)
    {
        *ip2++ = *ip1;
    }
    for (i = 0; i < 5; i++)
        printf("%d ", array2[i]);
}