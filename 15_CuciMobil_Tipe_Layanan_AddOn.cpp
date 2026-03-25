#include <stdio.h>

int main() {
    int tipe, wax, vacuum;
    float harga, total;

    printf("Tipe (1=Motor 2=Mobil): ");
    scanf("%d",&tipe);

    printf("Wax? (1/0): ");
    scanf("%d",&wax);

    printf("Vacuum? (1/0): ");
    scanf("%d",&vacuum);

    if(tipe==1) harga=20000;
    else harga=50000; //beda kendaraan

    total = harga;

    if(wax) total += 15000;
    if(vacuum) total += 10000; //addon

    if(total>70000) total *= 0.9; //diskon paket

    printf("Total bayar: %g\n", total);
}