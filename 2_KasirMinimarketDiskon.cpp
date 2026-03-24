#include <stdio.h>

int main() {
    int jumlah;
    float harga, total = 0, diskon = 0;

    printf("Jumlah barang: ");
    scanf("%d", &jumlah);

    for (int i = 1; i <= jumlah; i++) {
        printf("Harga ke-%d = Rp. ", i);
        scanf("%f", &harga);
        total += harga; //akumulasi harga
    }

    if (total > 200000) diskon = 0.2;
    else if (total > 100000) diskon = 0.1; //diskon bertingkat

    total = total - (total * diskon);

    printf("Total bayar: Rp. %g\n", total);
}