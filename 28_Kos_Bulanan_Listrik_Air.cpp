#include <stdio.h>

int main() {
    int bulan;
    float total;

    printf("Durasi (bulan): ");
    scanf("%d",&bulan);

    total = bulan*800000;

    total += bulan*100000; //listrik
    total += bulan*50000; //air

    if(bulan>=6) total*=0.9;

    printf("Total: %.0f\n", total);
}