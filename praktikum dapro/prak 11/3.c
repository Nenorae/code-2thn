#include <stdio.h>

char strA[80] = "A string to be used for demonstration";
char strB[80];

int main()
{
    char *pA, *pB;

    // Initial state
    printf("Initial state:\n");
    printf("strA: %p\n", (void *)strA);
    printf("strB: %p\n", (void *)strB);
    printf("pA: %p\n", (void *)&pA);
    printf("pB: %p\n", (void *)&pB);
    puts("");

    puts(strA);

    pA = strA;
    printf("After pA = strA:\n");
    printf("pA: %p (points to %p)\n", (void *)&pA, (void *)pA);
    puts(pA);

    pB = strB;
    printf("After pB = strB:\n");
    printf("pB: %p (points to %p)\n", (void *)&pB, (void *)pB);
    putchar('\n');

    while (*pA != '\0')
    {
        *pB++ = *pA++;
        printf("During copying:\n");
        printf("pA: %p (points to %p)\n", (void *)&pA, (void *)pA);
        printf("pB: %p (points to %p)\n", (void *)&pB, (void *)pB);
    }

    *pB = '\0';
    printf("After copying:\n");
    printf("strB: %p\n", (void *)strB);
    puts(strB);

    return 0;
}
