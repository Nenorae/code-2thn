#include <stdio.h>

int main()
{
    char *word = "TELEKOMUNIKASI";
    char thirdLetter = *(word + 2); // Indexing starts from 0, so third letter is at index 2
    printf("Huruf ketiga: %c\n", thirdLetter);
    return 0;
}
