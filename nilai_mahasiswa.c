/*
Nama        : Muhammad Faiz Qodri Muslim
NIM         : 2610511179
Kelas       : E
Modul       : 8
Deskripsi   : Program rekap dan pencarian nilai mahasiswa
              menggunakan array dan sequential search.
*/

#include <stdio.h>

#define MAX_DATA 50

// Deklarasi Prototipe Fungsi
void baca_nilai(double nilai[], int jumlah_data);
double hitung_total(const double nilai[], int jumlah_data);
double hitung_rata_rata(const double nilai[], int jumlah_data);
int cari_indeks_tertinggi(const double nilai[], int jumlah_data);
int cari_indeks_terendah(const double nilai[], int jumlah_data);
int hitung_jumlah_lulus(const double nilai[], int jumlah_data);
int hitung_frekuensi(const double nilai[], int jumlah_data, double target);
void tampilkan_posisi_target(const double nilai[], int jumlah_data, double target);

int main(void)
{
    double nilai[MAX_DATA];
    int jumlah_data;
    double target;

    printf("=================================================\n");
    printf("          PROGRAM REKAP NILAI MAHASISWA          \n");
    printf("=================================================\n");

    // Validasi jumlah mahasiswa (1-50)
    do
    {
        printf("Masukkan jumlah mahasiswa 1-%d: ", MAX_DATA);
        scanf("%d", &jumlah_data);
        if (jumlah_data < 1 || jumlah_data > MAX_DATA)
        {
            printf("Jumlah mahasiswa tidak valid.\n");
        }
    } while (jumlah_data < 1 || jumlah_data > MAX_DATA);

    // Mengisi array nilai mahasiswa
    baca_nilai(nilai, jumlah_data);

    // Perhitungan statistik
    double total = hitung_total(nilai, jumlah_data);
    double rata_rata = hitung_rata_rata(nilai, jumlah_data);
    int idx_tertinggi = cari_indeks_tertinggi(nilai, jumlah_data);
    int idx_terendah = cari_indeks_terendah(nilai, jumlah_data);
    int jumlah_lulus = hitung_jumlah_lulus(nilai, jumlah_data);

    // Menampilkan hasil rekap
    printf("\nHASIL REKAP\n");
    printf("-------------------------------------------------\n");
    printf("Jumlah mahasiswa : %d\n", jumlah_data);
    printf("Total nilai      : %.2f\n", total);
    printf("Rata-rata        : %.2f\n", rata_rata);
    printf("Nilai tertinggi  : %.2f (mahasiswa ke-%d)\n", nilai[idx_tertinggi], idx_tertinggi + 1);
    printf("Nilai terendah   : %.2f (mahasiswa ke-%d)\n", nilai[idx_terendah], idx_terendah + 1);
    printf("Jumlah lulus     : %d\n", jumlah_lulus);

    // Input nilai yang dicari
    printf("\nMasukkan nilai yang dicari: ");
    scanf("%lf", &target);

    // Menampilkan hasil pencarian
    printf("\nHASIL PENCARIAN\n");
    printf("-------------------------------------------------\n");
    tampilkan_posisi_target(nilai, jumlah_data, target);
    int frekuensi = hitung_frekuensi(nilai, jumlah_data, target);
    printf("Jumlah kemunculan : %d\n", frekuensi);
    printf("=================================================\n");

    return 0;
}

// Definisi Fungsi

void baca_nilai(double nilai[], int jumlah_data)
{
    int i;
    for (i = 0; i < jumlah_data; i++)
    {
        do
        {
            printf("Nilai mahasiswa ke-%d: ", i + 1);
            scanf("%lf", &nilai[i]);
            if (nilai[i] < 0.0 || nilai[i] > 100.0)
            {
                printf("Nilai tidak valid (harus 0-100).\n");
            }
        } while (nilai[i] < 0.0 || nilai[i] > 100.0);
    }
}

double hitung_total(const double nilai[], int jumlah_data)
{
    double total = 0.0;
    int i;
    for (i = 0; i < jumlah_data; i++)
    {
        total += nilai[i];
    }
    return total;
}

double hitung_rata_rata(const double nilai[], int jumlah_data)
{
    if (jumlah_data == 0)
        return 0.0;
    return hitung_total(nilai, jumlah_data) / jumlah_data;
}

int cari_indeks_tertinggi(const double nilai[], int jumlah_data)
{
    int idx_max = 0;
    int i;
    for (i = 1; i < jumlah_data; i++)
    {
        if (nilai[i] > nilai[idx_max])
        {
            idx_max = i;
        }
    }
    return idx_max;
}

int cari_indeks_terendah(const double nilai[], int jumlah_data)
{
    int idx_min = 0;
    int i;
    for (i = 1; i < jumlah_data; i++)
    {
        if (nilai[i] < nilai[idx_min])
        {
            idx_min = i;
        }
    }
    return idx_min;
}

int hitung_jumlah_lulus(const double nilai[], int jumlah_data)
{
    int lulus = 0;
    int i;
    for (i = 0; i < jumlah_data; i++)
    {
        if (nilai[i] >= 60.0)
        {
            lulus++;
        }
    }
    return lulus;
}

int hitung_frekuensi(const double nilai[], int jumlah_data, double target)
{
    int frekuensi = 0;
    int i;
    for (i = 0; i < jumlah_data; i++)
    {
        if (nilai[i] == target)
        {
            frekuensi++;
        }
    }
    return frekuensi;
}

void tampilkan_posisi_target(const double nilai[], int jumlah_data, double target)
{
    int ditemukan = 0;
    int i;

    for (i = 0; i < jumlah_data; i++)
    {
        if (nilai[i] == target)
        {
            if (ditemukan == 0)
            {
                printf("Nilai %.2f ditemukan pada mahasiswa ke-%d", target, i + 1);
                ditemukan = 1;
            }
            else
            {
                printf(", ke-%d", i + 1);
            }
        }
    }

    if (ditemukan == 0)
    {
        printf("Nilai %.2f tidak ditemukan.", target);
    }
    printf("\n");
}