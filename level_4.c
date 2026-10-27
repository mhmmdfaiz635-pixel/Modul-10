#include <stdio.h>

#define MAX_DATA 50

int sudah_ada(const int data[], int jumlah_data, int target)
{
    for (int i = 0; i < jumlah_data; i++)
    {
        if (data[i] == target)
        {
            return 1; // Sudah ada
        }
    }
    return 0; // Belum ada
}

int main(void)
{
    int data_awal[MAX_DATA];
    int data_akhir[MAX_DATA];
    int jumlah_awal, jumlah_akhir = 0;
    int i;

    printf("Masukkan jumlah data: ");
    scanf("%d", &jumlah_awal);

    for (i = 0; i < jumlah_awal; i++)
    {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &data_awal[i]);
    }

    for (i = 0; i < jumlah_awal; i++)
    {
        if (!sudah_ada(data_akhir, jumlah_akhir, data_awal[i]))
        {
            data_akhir[jumlah_akhir] = data_awal[i];
            jumlah_akhir++;
        }
    }

    printf("\nData akhir: ");
    for (i = 0; i < jumlah_akhir; i++)
    {
        printf("%d ", data_akhir[i]);
    }
    printf("\n");

    return 0;
}