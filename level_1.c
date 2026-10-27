#include <stdio.h>

#define MAX_DATA 50

int main(void)
{
    int data[MAX_DATA];
    int jumlah_data;
    int i;

    printf("Masukkan jumlah data: ");
    scanf("%d", &jumlah_data);

    for (i = 0; i < jumlah_data; i++)
    {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &data[i]);
    }

    printf("\nData asli    : ");
    for (i = 0; i < jumlah_data; i++)
    {
        printf("%d ", data[i]);
    }

    printf("\nData terbalik: ");
    // Perulangan mundur dari indeks terakhir
    for (i = jumlah_data - 1; i >= 0; i--)
    {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}