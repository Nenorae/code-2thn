#include <stdio.h>
  
int main()
{
    int angka[10], i, j, temp;

    // Input angka from the keyboard
    printf("Masukkan 10 bilangan:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Bilangan ke-%d: ", i + 1);
        scanf("%d", &angka[i]);
    }

    // Sort the angka in descending order using bubble sort
    for (i = 0; i < 10 - 1; i++)
    {
        for (j = 0; j < 10 - i - 1; j++)
        {
            if (angka[j] < angka[j + 1])
            {
                temp = angka[j];
                angka[j] = angka[j + 1];
                angka[j + 1] = temp;
            }
        }
    }

    // Display the sorted angka
    printf("\nBilangan setelah diurutkan menurun:\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", angka[i]);
    }
    printf("\n");

    return 0;
}
