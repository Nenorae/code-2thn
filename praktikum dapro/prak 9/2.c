#include <stdio.h>

int main()
{
    // Initialize a 2x2 matrix with direct initialization
    int matrix[2][2] = {
        {1, 2},
        {3, 4}};

    // Display the original matrix
    printf("matrix aseli:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Calculate the sum of all elements in the matrix
    int sum = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            sum += matrix[i][j];
        }
    }

    // Display the sum
    printf("\njumlah: %d\n", sum);

    return 0;
}
