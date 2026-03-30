#include <stdio.h>
int main() {
    int target, total = 0, setor;
    printf("Masukkan target tabungan: "); scanf("%d", &target);
    while (total < target) {
        printf("Progress: %d/%d. Masukkan setoran: ", total, target);
        scanf("%d", &setor);
        total += setor;
    }
    printf("Selamat! Target tercapai. Total: %d\n", total);
}