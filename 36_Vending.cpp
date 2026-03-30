#include <stdio.h>
int main() {
    int stok[3] = {5, 5, 5}, pilih; // Cola, Air, Jus
    do {
        printf("\n--- Vending Machine ---\n1. Cola (Sisa %d)\n2. Air (Sisa %d)\n3. Jus (Sisa %d)\n0. Keluar\nPilih: ", stok[0], stok[1], stok[2]);
        scanf("%d", &pilih);
        if (pilih >= 1 && pilih <= 3) {
            if (stok[pilih-1] > 0) {
                stok[pilih-1]--;
                printf("Silakan ambil minuman Anda!\n");
            } else printf("Maaf, stok habis!\n");
        }
    } while (pilih != 0);
}