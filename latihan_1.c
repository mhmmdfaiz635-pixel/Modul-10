#include <stdio.h>

#define MAX_DATA 100
void baca_data(int data[], int jumlah_data);
void tampilkan_data(const int data[], int jumlah_data);
int main(void)
{
    int data[MAX_DATA];
    int jumlah_data;
    do
    {
        printf("Masukkan jumlah data 1-%d: ", MAX_DATA);
        scanf("%d", &jumlah_data);
        if ((jumlah_data < 1) ||
            (jumlah_data > MAX_DATA))
        {
            printf("Jumlah data tidak valid.\n");
        }
    } while ((jumlah_data < 1) ||
             (jumlah_data > MAX_DATA));
    baca_data(data, jumlah_data);
    printf("\nDATA YANG DIMASUKKAN\n");
    tampilkan_data(data, jumlah_data);
    return 0;
}
void baca_data(int data[], int jumlah_data)
{
    int i;

    for (i = 0; i < jumlah_data; i++)
    {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &data[i]);
    }
}
void tampilkan_data(const int data[],
                    int jumlah_data)
{
    int i;
    for (i = 0; i < jumlah_data; i++)
    {
        printf("data[%d] = %d\n", i, data[i]);
    }
}
