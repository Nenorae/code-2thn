#include <stdio.h>
int limit, sum = 0;
int main(int argc, char const *argv[])
{
    printf("masukan limit: ");
    scanf("%d", &limit);
    for (int i = 1; i <= limit; i++)
    {
        sum += i;
    }
    printf("total adalah %d", sum);
    return 0;
}
