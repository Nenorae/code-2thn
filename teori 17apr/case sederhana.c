#include <stdio.h>


int hitungLuasPersegi(int sisi) {
    return sisi * sisi;
}

int main() {
    int sisiPersegi;
    
    printf("Masukkan panjang sisi persegi: ");
    scanf("%d", &sisiPersegi);

    
    int luas = hitungLuasPersegi(sisiPersegi);

    printf("Luas persegi dengan sisi %d adalah %d\n", sisiPersegi, luas);

    return 0;
}
