#include <stdio.h>

int main() {
    float berat, total;
    int express;

    printf("Berat (kg): ");
    scanf("%f", &berat);

    printf("Express? (1/0): ");
    scanf("%d", &express);

    total = berat * 7000; //harga normal

    if (express == 1) {
        total += berat * 3000; //tambahan express
    }

    printf("Total bayar: %.2f\n", total);
}