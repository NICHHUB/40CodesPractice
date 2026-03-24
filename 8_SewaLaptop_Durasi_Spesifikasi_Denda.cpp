#include <stdio.h>

int main() {
    int hari, telat, spek;
    float harga, total;

    printf("Durasi sewa (hari): ");
    scanf("%d",&hari);

    printf("Spek (1=Standar 2=Gaming): ");
    scanf("%d",&spek);

    printf("Telat (hari): ");
    scanf("%d",&telat);

    if(spek==1) harga=80000;
    else harga=150000; //beda spek beda harga

    total = hari * harga;

    if(hari>=7) total *= 0.9; //diskon lama

    if(telat>0) total += telat * 50000; //denda telat

    printf("Total bayar: %g\n", total);
}