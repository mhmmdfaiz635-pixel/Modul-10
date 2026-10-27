#include <stdio.h>

void tampilkan_posisi_target(const int data[], int jumlah_data, int target);
int main(void)
{
    int data[] = {10, 20, 10, 30, 40, 10, 50};
    int jumlah_data =
        (int)(sizeof(data) / sizeof(data[0]));
    int target;
    printf("Data: ");
    for (int i = 0; i < jumlah_data; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\nMasukkan target: ");
    scanf("%d", &target);
    tampilkan_posisi_target(data, jumlah_data, target);
    return 0;
}
void tampilkan_posisi_target(const int data[], int jumlah_data, int target)
{
    int jumlah_ditemukan = 0;
    int i;
    printf("Target ditemukan pada indeks: ");
    for (i = 0; i < jumlah_data; i++)
    {
        if (data[i] == target)
        {
            printf("%d ", i);
            jumlah_ditemukan++;
        }
    }
    if (jumlah_ditemukan == 0)
    {
        printf("tidak ada");
    }
    printf("\nJumlah kemunculan: %d\n", jumlah_ditemukan);
}
