#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char string[90];
    printf("Masukan String : ");
    scanf("%s", string);
    for (int i = 0; string[i]; i++)
    {
        
        string[i] += 32;
    }
    printf("besar ke kecil : %s \n", string);
    printf("setelah dilawik ");
    for (int j = strlen(string); j >= 0; j--)
    {
        
        printf("%c", string[j]);
    }

    return 0;
}