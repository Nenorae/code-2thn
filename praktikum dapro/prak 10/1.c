#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char kata[100];
    int i, n;
    printf("masukan kata: ");
    scanf("%s", kata);
    n = strlen(kata);

    for (i = 0; i < n; i++)
    {
        kata[i] = tolower(kata[i]);
    }

    for (i = 0; i < n / 2; i++)
    {
        if (kata[i] != kata[n - i - 1])
        {
            printf("bukan palin");
            return 0;
        }
        printf("palin");
        return 0;
    }
}
