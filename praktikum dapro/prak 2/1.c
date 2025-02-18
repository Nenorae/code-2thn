#include <stdio.h>
float alas, tinggi, luas;

int main(int argc, char const *argv[])
{
   printf("masukan alas segitiga: ");
   scanf("%f", &alas);
   printf("masukan tinggi segitiga: ");
   scanf("%f", &tinggi);

   luas = 0.5*alas*tinggi;
   printf("luas segitiga adalah %f\n", luas);
    return 0;
}
