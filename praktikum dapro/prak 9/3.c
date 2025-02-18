#include <stdio.h>

int main()
{
    int siswa, i, j;
    char name[50];
    int jumlah;
    float total, rerata;

    printf("Input Jumlah mahasiswa : ");
    scanf("%d", &siswa);

    for (i = 0; i < siswa; i++)
    {
        printf("Nama Mahasiswa-%d : ", i + 1);
        scanf("%s", name);

        printf("Jumlah nilai : ");
        scanf("%d", &jumlah);

        total = 0;

        for (j = 0; j < jumlah; j++)
        {
            int nilai;
            printf("Nilai-%d : ", j + 1);
            scanf("%d", &nilai);
            total += nilai;
        }

        rerata = total / jumlah;
        printf("Nilai rata-rata %s adalah %.2f.\n", name, rerata);
    }

    return 0;
}
