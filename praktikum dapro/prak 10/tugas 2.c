#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("masukan kata: ");
    scanf("%s", str);
    int len = strlen(str);

    for (int i = 1; i <= len; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%c", str[j]);
        }
        printf("\n");
    }

    return 0;
}
