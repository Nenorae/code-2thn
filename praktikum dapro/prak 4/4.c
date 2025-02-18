#include <stdio.h>

int main() {
    char huruf;
    int nilai_angka;

    printf("Masukkan huruf: ");
    scanf("%c", &huruf);
    if (huruf == 'A')
    {
        printf(" nilai A = 4");
    } else if (huruf == 'B')
    {
        printf("nilai B = 3");
    }else if (huruf == 'C')
    {
        printf("nilai C = 2");
    }else if (huruf == 'D')
    {
        printf("nilai D = 1");
    }else if (huruf == 'E')
    {
        printf("nilai E = 0");
       
    }else{
        printf("variabel tak terkontrol");
    }
    
    
    

    return 0;
}
