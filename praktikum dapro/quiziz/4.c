#include <stdio.h>
int pemakaian, hasil;
int main(int argc, char const *argv[])
{
    printf("pakai berapa kwh: ");
    scanf("%d", &pemakaian);

    if (pemakaian >= 101 && pemakaian <= 300)
    {
        hasil= 150000 + 2000 * (pemakaian-101);
    }else if (pemakaian >= 301 && pemakaian <= 500)
    {
        hasil = 350000 + 2500*(pemakaian - 301);
    }else if (pemakaian > 500)
    {
        hasil = 500000 + 3000*(pemakaian - 500);
    } else {
        hasil = 150000;
    }
    printf("biaya anda adalah: %d", hasil);
    
    
    
    return 0;
}
