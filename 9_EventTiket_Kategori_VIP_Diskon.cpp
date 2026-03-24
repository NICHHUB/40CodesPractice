#include <stdio.h>
//menghitung total harga tiket dengan kategori, jumlah, akses VIP, dan diskon grup
int main() {
    int kategori, jumlah, vip;
    float harga, total;

    printf("Kategori (1=Reg 2=VIP 3=VVIP): ");
    scanf("%d",&kategori);

    printf("Jumlah tiket: ");
    scanf("%d",&jumlah);

    printf("Akses VIP tambahan? (1/0): ");
    scanf("%d",&vip);

    if(kategori==1) harga=100000;
    else if(kategori==2) harga=250000;
    else harga=500000; //harga dasar

    total = harga * jumlah;

    if(vip) total += 50000 * jumlah; //ini add on

    if(jumlah>=5) total *= 0.9; //diskon grup

    printf("Total bayar: %.0f\n", total);
}