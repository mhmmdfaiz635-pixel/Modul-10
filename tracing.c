#include <stdio.h>

int cari_sekuensial(const int data[], int jumlah_data, int target);
int main(void)
{
    int data[] = {12, 7, 25, 18, 30, 9};
    int jumlah_data = 6;
    int target = 18;
    int posisi;
    posisi = cari_sekuensial(data, jumlah_data, target);
    printf("Posisi: %d\n", posisi);
    return 0;
}
int cari_sekuensial(const int data[], int jumlah_data, int target)
{
    int i;
    for (i = 0; i < jumlah_data; i++)
    {
        if (data[i] == target)
        {
            return i;
        }
    }
    return -1;
}
