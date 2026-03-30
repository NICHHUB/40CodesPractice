#include <stdio.h>
int main() {
    int suara[3] = {0, 0, 0}, pilihan;
    while (1) {
        printf("\nVote: 1. Calon A, 2. Calon B, 0. Selesai: "); scanf("%d", &pilihan);
        if (pilihan == 0) break;
        if (pilihan == 1 || pilihan == 2) suara[pilihan-1]++;
    }
    printf("Hasil Akhir - A: %d, B: %d\n", suara[0], suara[1]);
    return 0;
}