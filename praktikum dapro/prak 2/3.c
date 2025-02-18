#include <stdio.h>
float bilangan1, bilangan2, temp;

int main(int argc, char const *argv[])
{
   printf("masukan bilangan pertama: ");
   scanf("%f", &bilangan1);
   printf("masukan bilangan kedua: ");
   scanf("%f", &bilangan2);

   temp = bilangan1;
   bilangan1=bilangan2;
   bilangan2=temp;

   printf("bilangan pertama adalah %f\n", bilangan1);
   printf("bilangan kedua adalah %f\n",bilangan2);
    return 0;
}
