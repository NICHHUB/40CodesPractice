#include <stdio.h>

int main() {
    float harga, berat;
    int asuransi;
    float total;

    printf("Harga barang: ");
    scanf("%f",&harga);

    printf("Berat (kg): ");
    scanf("%f",&berat);

    printf("Asuransi (1/0)? ");
    scanf("%d",&asuransi);

    total = harga + berat*5000;

    if(asuransi) total += 10000;

    printf("Total: %.0f\n", total);
}