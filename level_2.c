#include <stdio.h>

#define MAX_DATA 50

int main(void)
{
    int data[MAX_DATA];
    int jumlah_data;
    int genap = 0;
    int ganjil = 0;
    int i;

    printf("Masukkan jumlah data: ");
    scanf("%d", &jumlah_data);

    for (i = 0; i < jumlah_data; i++)
    {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &data[i]);
    }

    for (i = 0; i < jumlah_data; i++)
    {
        if (data[i] % 2 == 0)
        {
            genap++;
        }
        else
        {
            ganjil++;
        }
    }

    printf("\nJumlah genap : %d\n", genap);
    printf("Jumlah ganjil: %d\n", ganjil);

    return 0;
}