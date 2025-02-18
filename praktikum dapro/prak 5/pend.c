#include <stdio.h>

int main() {
    char pilihan;
    do {
        int bilangan, pembagi, sisa_pembagian;

        printf("Masukkan bilangan: ");
        scanf("%d", &bilangan);

        printf("Masukkan bilangan pembagi (2-5): ");
        scanf("%d", &pembagi);

        if (pembagi >= 2 && pembagi <= 5) {
            sisa_pembagian = bilangan % pembagi;

            if (sisa_pembagian == 0) {
                printf("Tidak ada sisa bagi.\n");
            } else {
                printf("Sisa bagi dari %d dibagi %d adalah %d.\n", bilangan, pembagi, sisa_pembagian);
            }
        } else {
            printf("Bilangan pembagi harus di antara 2 hingga 5.\n");
        }

        printf("Apakah ingin mengulangi program? (Y/T): ");
        scanf(" %c", &pilihan);
    } while (pilihan == 'Y' || pilihan == 'y');

    printf("Program selesai.\n");

    return 0;
}
