#include <stdio.h>

int main() {
    int n, member;
    float harga, total=0;

    printf("Jumlah pesanan: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Harga menu ke-%d: ", i+1);
        scanf("%f",&harga);
        total += harga; //jumlah pesanan
    }

    printf("Member? (1/0): ");
    scanf("%d",&member);

    total *= 1.1; //service charge
    total *= 1.1; //pajak

    if(member) total *= 0.9; //diskon member

    if(total>200000) total -= 20000; //bonus potongan

    printf("Total bayar: %g\n", total);
}