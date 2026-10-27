#include <stdio.h>

#define MAX_DATA 50

int cari_sekuensial(const int data[], int jumlah_data, int target)
{
    for (int i = 0; i < jumlah_data; i++)
    {
        if (data[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main(void)
{
    int data[MAX_DATA];
    int jumlah_data, target, posisi, i;

    printf("Masukkan jumlah data: ");
    scanf("%d", &jumlah_data);

    for (i = 0; i < jumlah_data; i++)
    {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &data[i]);
    }

    printf("Masukkan nilai yang ingin dihapus: ");
    scanf("%d", &target);

    posisi = cari_sekuensial(data, jumlah_data, target);

    if (posisi != -1)
    {
        // Penggeseran elemen ke kiri
        for (i = posisi; i < jumlah_data - 1; i++)
        {
            data[i] = data[i + 1];
        }
        jumlah_data--;

        printf("\nData akhir: ");
        for (i = 0; i < jumlah_data; i++)
        {
            printf("%d ", data[i]);
        }
        printf("\n");
    }
    else
    {
        printf("\nNilai %d tidak ditemukan dalam array.\n", target);
    }

    return 0;
}