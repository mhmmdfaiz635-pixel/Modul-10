#include <stdio.h>
#include <stdlib.h>

#define MAX_DATA 50

int main(void)
{
    int data[MAX_DATA];
    int n;
    int selisih_maks = 0;
    int selisih;
    int i;

    if (scanf("%d", &n) != 1) return 0;

    for (i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }

    // Menghitung selisih absolut maksimum antar elemen bersebelahan
    for (i = 0; i < n - 1; i++)
    {
        selisih = abs(data[i + 1] - data[i]);
        if (selisih > selisih_maks)
        {
            selisih_maks = selisih;
        }
    }

    // Tampilan output sesuai format ketat
    printf("================================================\n");
    printf("SELISIH MAKSIMUM ANTAR ELEMEN\n");
    printf("================================================\n");
    printf("Jumlah data     : %d\n", n);
    printf("Data            : ");
    for (i = 0; i < n; i++)
    {
        printf("%d%s", data[i], (i == n - 1) ? "" : " ");
    }
    printf("\nSelisih maksimum: %d\n", selisih_maks);
    printf("================================================\n");

    return 0;
}