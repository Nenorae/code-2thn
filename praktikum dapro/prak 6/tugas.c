#include <stdio.h>

int isPrime(int num) {
    int i;
    if (num <= 1) return 0; // Bilangan negatif dan 1 bukan bilangan prima
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Jika ditemukan pembagi lain selain 1 dan num, bukan bilangan prima
    }
    return 1; // Jika tidak ada pembagi lain selain 1 dan num, bilangan prima
}

int main(int argc, char const *argv[])
{
    do
    {
        int prima, sum, angka;
        sum = 0, prima = 0;
        printf("program jumlah bil prima \n");
        printf("mau berapa prima: ");
        scanf("%d", &angka);

        for (int i = 1; i <= angka; i++)
        {
            do
            {
                prima++;
            } while (!isPrime(prima));
            printf("prima %d = %d \n", i, prima);
            sum += prima;
            
        }
        printf("jumlah prima: %d \n", sum);
        printf("lanjut ga nie...");
        getchar();

        
    } while (getchar() == '\n');
    
    return 0;
}
