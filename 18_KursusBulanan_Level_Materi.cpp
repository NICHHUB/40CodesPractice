#include <stdio.h>

int main() {
    int bulan, level, materi;
    float harga, total;

    printf("Durasi (bulan): ");
    scanf("%d",&bulan);

    printf("Level (1=Basic 2=Advance): ");
    scanf("%d",&level);

    printf("Tambah materi? (1/0): ");
    scanf("%d",&materi);

    harga = (level==1)?300000:500000;

    total = bulan * harga;

    if(materi) total += bulan*100000;

    if(bulan>=3) total *= 0.9;

    printf("Total: %.0f\n", total);
}