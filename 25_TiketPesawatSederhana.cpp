#include <stdio.h>

int main() {
    int kursi[5][4] = {0}; // 5 baris, 4 kursi per baris
    int b, k, pilih;

    while(1) {
        printf("\n--- Denah Kursi (0: Kosong, 1: Terisi) ---\n    A B   C D\n");
        for(int i=0; i<5; i++) {
            printf("%d  ", i+1);
            for(int j=0; j<4; j++) {
                printf("%d ", kursi[i][j]);
                if(j == 1) printf("  ");
            }
            printf("\n");
        }
        printf("\n1. Booking\n0. Selesai\nPilih: "); scanf("%d", &pilih);
        if(pilih == 0) break;

        printf("Pilih Baris (1-5) & Kolom (1-4): ");
        scanf("%d %d", &b, &k);
        if(kursi[b-1][k-1] == 0) {
            kursi[b-1][k-1] = 1;
            printf("Booking Berhasil!\n");
        } else printf("Kursi sudah penuh!\n");
    }
    return 0;
}