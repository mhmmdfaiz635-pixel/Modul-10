#include <stdio.h>

#define JUMLAH_DATA 5

int main(void)
{
    int nilai[JUMLAH_DATA];
    int total = 0; // Inisialisasi accumulator dengan nilai 0
    double rata_rata;
    int i;

    // Perulangan input dari indeks 0 hingga JUMLAH_DATA - 1 (0 sampai 4)
    for (i = 0; i < JUMLAH_DATA; i++)
    {
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
    }

    // Perulangan untuk menghitung total akumulasi nilai
    for (i = 0; i < JUMLAH_DATA; i++)
    {
        total += nilai[i]; // Menjumlahkan setiap elemen ke total
    }

    // Konversi tipe ke double agar menghasilkan pembagian desimal yang presisi
    rata_rata = (double)total / JUMLAH_DATA;

    printf("Total     : %d\n", total);
    printf("Rata-rata : %.2f\n", rata_rata); // Menggunakan %.2f untuk format double

    return 0;
}