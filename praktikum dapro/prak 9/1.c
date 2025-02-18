#include <stdio.h>

int main()
{
    char characters[26];
    int counts[26] = {0}; // Initialize all counts to 0
    int n, i;

    printf("Masukkan jumlah karakter yang akan dihitung: ");
    scanf("%d", &n);

    printf("Masukkan karakter:\n");
    for (i = 0; i < n; i++)
    {
        printf("Masukkan karakter ke-%d: ", i + 1);
        scanf(" %c", &characters[i]); // Notice the space before %c to skip newline character
    }

    // Count frequency of each character
    for (i = 0; i < n; i++)
    {
        counts[characters[i] - 'a']++;
    }

    // Display frequencies
    for (i = 0; i < 26; i++)
    {
        if (counts[i] > 0)
        {
            printf("Frekuensi %c=%d\n", i + 'a', counts[i]);
        }
    }

    return 0;
}
