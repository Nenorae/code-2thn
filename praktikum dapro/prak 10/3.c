#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char kata1[100], kata2[100];
    int hasil;

    printf("kata1: ");
    scanf("%99s", kata1); // Use %99s to prevent buffer overflow

    printf("kata2: ");
    scanf("%99s", kata2); // Use %99s to prevent buffer overflow

    hasil = strcmp(kata1, kata2);

    if (hasil < 0)
    {
        printf("kata 1 < kata 2\n"); // Correct the comparison sign
    }
    else if (hasil == 0)
    {
        printf("kata 1 == kata 2\n");
    }
    else if (hasil > 0)
    {
        printf("kata 1 > kata 2\n"); // Correct the comparison sign
    }
    return 0;
}
