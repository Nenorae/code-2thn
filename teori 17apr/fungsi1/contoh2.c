#include <stdio.h>
int kuadrat(int b); // Prototype Fungsi

int main()
{
    int pangkat;
    printf("Kuadrat 2 adalah %d \n", kuadrat(2)); // Fixed the format string
    printf("Kuadrat 3 adalah %d \n", kuadrat(3)); // Fixed the format string
    pangkat = kuadrat(5);
    printf("Kuadrat 5 adalah %d \n", pangkat); // Fixed the format string

    return 0; // Added return statement
}

int kuadrat(int b) // Definisi Fungsi
{
    return (b * b);
}
