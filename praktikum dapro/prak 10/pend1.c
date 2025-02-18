#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    
    char string[30];
    printf("Masukan String : ");
    scanf("%s", string);
    printf("Jadi panjang string nya adalah : %lu", strlen(string));
    return 0;
}