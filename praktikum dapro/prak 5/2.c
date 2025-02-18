#include <stdio.h>
char choice;
int num, sum;
int main(int argc, char const *argv[])
{
    do
    {
        int num;
        printf("masukin angka: ");
        scanf("%d", &num);

        sum += num;

        printf("lagi? (Y/N): ");
        scanf(" %c", &choice);
    } while (choice =='y'|| choice == 'Y');

    printf("jumlah semuanya %d", sum);
    
    return 0;
}
