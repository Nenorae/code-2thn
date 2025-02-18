#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int compare(const void *a, const void *b)
{
    return strcmp((const char *)a, (const char *)b);
}

int main()
{
    int n;
    printf("Masukkan jumlah kata: ");
    scanf("%d", &n);

    char words[n][100];
    printf("Masukkan kata-kata:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%s", words[i]);
    }

  
    qsort(words, n, sizeof(words[0]), compare);

    printf("\nKata-kata setelah diurutkan:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", words[i]);
    }

    return 0;
}
