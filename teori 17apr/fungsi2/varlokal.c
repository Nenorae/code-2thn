#include <stdio.h>

// Function prototype
void fung_1(void);

int main() // Added return type int to main
{
    int i = 20;
    fung_1();
    printf("nilai i di dalam main() = %d\n", i); // Corrected the string format
    return 0;                                    // Added return statement
}

void fung_1(void)
{
    int i = 11;
    printf("nilai i di dalam fung_1() = %d\n", i); // Corrected the string format
}
