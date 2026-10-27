#include <stdio.h>

// Fungsi sequential search menggunakan const pada parameter array
int cari_data(
    const int data[],
    int jumlah_data,
    int target
);

int main(void)
{
    int data[6] = {10, 20, 30, 40, 50, 60};
    int target;
    int posisi;

    printf("Masukkan target: ");
    scanf("%d", &target);

    posisi = cari_data(data, 6, target);

    // Memeriksa penanda -1 untuk kondisi data tidak ditemukan
    if (posisi == -1)
    {
        printf("Data tidak ditemukan.\n");
    }
    else
    {
        printf("Data ditemukan pada indeks %d.\n", posisi);
    }

    return 0;
}

int cari_data(
    const int data[],
    int jumlah_data,
    int target
)
{
    int i;

    // Perulangan hingga jumlah_data - 1
    for (i = 0; i < jumlah_data; i++)
    {
        // Perbandingan kesamaan nilai
        if (data[i] == target)
        {
            return i; // Mengembalikan indeks saat pertama kali ditemukan
        }
    }

    return -1; // Mengembalikan -1 jika target tidak ada dalam array
}