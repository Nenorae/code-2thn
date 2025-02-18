#include <stdio.h>

void itung() {
    float radius = 5.0; 
    float pi = 3.14159;
    float luas = pi * radius * radius;
    float keliling = 2 * pi * radius;

    printf("luas adalah: %.2f\n", luas);
    printf("keliling adalah: %.2f\n", keliling);
}

int main() {
    itung(); 
    return 0;
}
