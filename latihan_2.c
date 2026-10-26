#include <stdio.h>

#define MAX_DATA 100
void baca_data(double data[], int jumlah_data);
double hitung_total(const double data[], int jumlah_data);
double hitung_rata_rata(const double data[], int jumlah_data);
double cari_minimum(const double data[], int jumlah_data);
double cari_maksimum(

    const double data[], int jumlah_data);
int main(void)
{
    double data[MAX_DATA];
    int jumlah_data;
    double total;
    double rata_rata;
    double minimum;
    double maksimum;
    do
    {
        printf("Masukkan jumlah data 1-%d: ", MAX_DATA);
        scanf("%d", &jumlah_data);
    } while ((jumlah_data < 1) ||
             (jumlah_data > MAX_DATA));
    baca_data(data, jumlah_data);
    total = hitung_total(data, jumlah_data);
    rata_rata = hitung_rata_rata(data, jumlah_data);
    minimum = cari_minimum(data, jumlah_data);
    maksimum = cari_maksimum(data, jumlah_data);
    printf("\nHASIL STATISTIK\n");
    printf("Jumlah data : %d\n", jumlah_data);
    printf("Total       : %.2f\n", total);
    printf("Rata-rata   : %.2f\n", rata_rata);
    printf("Minimum     : %.2f\n", minimum);
    printf("Maksimum    : %.2f\n", maksimum);
    return 0;
}
void baca_data(double data[], int jumlah_data)
{
    int i;
    for (i = 0; i < jumlah_data; i++)
    {
        printf("Data ke-%d: ", i + 1);
        scanf("%lf", &data[i]);
    }
}
double hitung_total(const double data[], int jumlah_data)
{
    double total = 0.0;
    int i;
    for (i = 0; i < jumlah_data; i++)
    {
        total += data[i];
    }
    return total;
}
double hitung_rata_rata(const double data[], int jumlah_data)
{
    double total;
    total = hitung_total(data, jumlah_data);
    return total / jumlah_data;
}
double cari_minimum(const double data[], int jumlah_data)
{
    double minimum = data[0];
    int i;
    for (i = 1; i < jumlah_data; i++)
    {
        if (data[i] < minimum)
        {
            minimum = data[i];
        }
    }
    return minimum;
}
double cari_maksimum(const double data[], int jumlah_data)
{
    double maksimum = data[0];
    int i;
    for (i = 1; i < jumlah_data; i++)
    {
        if (data[i] > maksimum)
        {
            maksimum = data[i];
        }
    }
    return maksimum;
}
