#include <stdio.h>

int main() {
    int bulan, pt, sauna;
    float total;

    printf("Durasi (bulan): ");
    scanf("%d",&bulan);

    printf("Pakai PT? (1/0): ");
    scanf("%d",&pt);

    printf("Pakai sauna? (1/0): ");
    scanf("%d",&sauna);

    total = bulan*200000;

    if(pt) total += bulan*150000;
    if(sauna) total += bulan*50000;

    if(bulan>=6) total *= 0.85;

    printf("Total: %.0f\n", total);
}