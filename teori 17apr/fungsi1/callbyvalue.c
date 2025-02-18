#include <stdio.h>

// Function prototype
void fungsi_nilai(int);

int main() // Added return type int to main
{
    int a;
    a = 10;
    printf("nilai a sebelum fungsi = %d\n", a); // Added double quotes around the string
    fungsi_nilai(a);
    printf("nilai a setelah fungsi = %d\n", a); // Added double quotes around the string

    return 0; // Return 0 at the end of main function
}

void fungsi_nilai(int b)
{
    b = b + 5;
    printf("nilai a di fungsi = %d\n", b); // Added double quotes around the string
}
