#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char kata[100];
    int i, n;

    printf("kata yang ada A nya: ");
        scanf("%s", kata);

    n = strlen(kata);


   for ( i = 0; i<n; i++)
   {
    if (kata[i] == 'a'|| kata[i] == 'A')
    {
        kata[i] = 'i';
    }
    
   }
   printf("sitilih di i kin: %s", kata);

    return 0;
}
