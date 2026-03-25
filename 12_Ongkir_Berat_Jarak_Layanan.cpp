#include <stdio.h>

int main() {
    float berat, jarak;
    int layanan;
    float total;

    printf("Berat (kg): ");
    scanf("%f",&berat);

    printf("Jarak (km): ");
    scanf("%f",&jarak);

    printf("Layanan (1=Reg 2=Express): ");
    scanf("%d",&layanan);

    total = berat*4000 + jarak*1500;

    if(layanan==2) total*=1.5; //express

    if(berat>10) total*=0.9; //diskon berat

    printf("Ongkir: %g\n", total);
}