#include <stdio.h>

int main()
{
    int jumlahMatkul, kodeMK, sks, nilai, totalSKS = 0, totalBobot = 0;
    float rataRata;

    printf("berapa mata kuliah: ");
    scanf("%d", &jumlahMatkul);

    for (int i = 1; i <= jumlahMatkul; i++)
    {
        printf("\nmata kuliah PENS %d\n", i);

        printf("masukan kode mata kuliah: ");
        scanf("%d", &kodeMK);

        char namaMK[50];
        printf("masukan nama mata kuliah: ");
        scanf(" %[^\n]s", namaMK);

        printf("Masukkan SKS: ");
        scanf("%d", &sks);

        printf("masukan nilai: ");
        scanf("%d", &nilai);

        totalSKS += sks;
        totalBobot += sks * nilai;
    }

    if (totalSKS != 0)
    {
        rataRata = (float)totalBobot / totalSKS;
        printf("\nrata rata nilai anda adalah: %.2f\n", rataRata);

        int ips;
        if (rataRata > 81)
        {
            ips = 4;
        }
        else if (rataRata > 61)
        {
            ips = 3;
        }
        else if (rataRata > 41)
        {
            ips = 2;
        }
        else
        {
            ips = 1;
        }

        printf("indeks prestasi semester adalah (IPS): %d\n", ips);
    }
    else
    {
        printf("\nTtidak ada data mata kuliah yang dimasukan.\n");
    }

    return 0;
}


