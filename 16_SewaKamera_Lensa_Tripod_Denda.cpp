#include <stdio.h>

int main() {
    int hari, lensa, tripod, telat;
    float total=0;

    printf("Hari sewa: ");
    scanf("%d",&hari);

    printf("Tambah lensa? (1/0): ");
    scanf("%d",&lensa);

    printf("Tambah tripod? (1/0): ");
    scanf("%d",&tripod);

    printf("Telat (hari): ");
    scanf("%d",&telat);

    total = hari * 100000;

    if(lensa) total += hari*50000;
    if(tripod) total += hari*20000; //addon per hari

    if(telat) total += telat*75000; //denda

    printf("Total: %0f\n", total);
}