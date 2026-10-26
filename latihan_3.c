#include <stdio.h>

#define MAX_DATA 100
void baca_data(int data[], int jumlah_data);
void tampilkan_data(const int data[], int jumlah_data);
int cari_sekuensial(

    const int data[], int jumlah_data, int target);
int hitung_frekuensi(const int data[], int jumlah_data, int target);
int main(void)
{
    int data[MAX_DATA];
    int jumlah_data;
    int target;
    int posisi;
    int frekuensi;
    do
    {
        printf("Masukkan jumlah data 1-%d: ", MAX_DATA);
        scanf("%d", &jumlah_data);
    } while ((jumlah_data < 1) ||
             (jumlah_data > MAX_DATA));
    baca_data(data, jumlah_data);
    printf("\nData: ");
    tampilkan_data(data, jumlah_data);
    printf("Masukkan data yang dicari: ");
    scanf("%d", &target);

    posisi = cari_sekuensial(data, jumlah_data, target);
    frekuensi = hitung_frekuensi(data, jumlah_data, target);
    if (posisi != -1)

    {
        printf("Data ditemukan.\n");
        printf("Kemunculan pertama pada indeks: %d\n", posisi);
        printf("Nomor urut data              : %d\n", posisi + 1);
        printf("Jumlah kemunculan            : %d\n", frekuensi);
    }
    else
    {
        printf("Data tidak ditemukan.\n");
    }
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
void tampilkan_data(const int data[], int jumlah_data)
{
    int i;
    for (i = 0; i < jumlah_data; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
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
int hitung_frekuensi(const int data[], int jumlah_data, int target)
{
    int frekuensi = 0;
    int i;
    for (i = 0; i < jumlah_data; i++)
    {
        if (data[i] == target)
        {
            frekuensi++;
        }
    }
    return frekuensi;
}
