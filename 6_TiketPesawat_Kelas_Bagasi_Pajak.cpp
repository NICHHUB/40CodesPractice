#include <stdio.h>

int main() {
    int kelas, bagasi, asuransi;
    float harga, total;

    printf("Kelas (1=Ekonomi 2=Bisnis 3=First): ");
    scanf("%d",&kelas);

    printf("Berat bagasi (kg): ");
    scanf("%d",&bagasi);

    printf("Asuransi? (1/0): ");
    scanf("%d",&asuransi);

    if(kelas==1) harga=1000000;
    else if(kelas==2) harga=2000000;
    else harga=3500000; //harga dasar

    total = harga;

    if(bagasi>20){
        total += (bagasi-20)*50000; //bagasi lebih
    }

    if(asuransi) total += 50000; //opsional

    total *= 1.1; //pajak

    printf("Total bayar: %g\n", total);
}