#include <stdio.h>
int umur;
int main(int argc, char const *argv[])
{
    printf("17/18 ?: ");
    scanf("%d", &umur);

    if (umur == 17)
    {
        printf("average mahasiwa teknik");
    }else if (umur == 18)
    {
        printf("ekonomi cuih");
    } else{
        printf("min umur 17 max 18");
    }
   
    
    return 0;
}
