#include <stdio.h>

int sum(int num); 

int main()
{
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);
    result = sum(number);

    printf("Sum = %d\n", result);

    return 0;
}

int sum(int num)
{
    if (num != 0)
    {
        return num + sum(num - 1);
    }
    else
    {
        return 0;
    }
}
