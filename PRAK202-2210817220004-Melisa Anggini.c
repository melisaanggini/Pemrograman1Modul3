#include <stdio.h>

int main()
{
    for (int i=0; i<=1; i++){
    float np,nk,hasil;

    printf("Masukkan Nilai Pertama :");
    scanf("%f", &np);
    printf("Masukkan Nilai Kedua   :");
    scanf("%f", &nk);
    hasil = np+nk;
    printf("Hasil dari penjumlahan nilai pertama \"%.2g\" dan nilai kedua \"%.3g\" adalah \"%.2f\"\n\n", np,nk,hasil);
    }
}
