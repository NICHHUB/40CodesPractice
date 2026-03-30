#include <stdio.h>

int main() {
    int barang[100], n = 0, pilih, total = 0;

    do {
        printf("\n1. Tambah\n2. Hapus (Terakhir)\n3. Lihat Total\n0. Keluar\nPilih: ");
        if (scanf("%d", &pilih) != 1) {
            printf("Input tidak valid!\n");
            while(getchar() != '\n'); // Membersihkan buffer
            continue;
        }

        if (pilih == 1) {
            if (n < 100) {
                printf("Masukkan harga barang: ");
                scanf("%d", &barang[n]);
                n++;
            } else {
                printf("Penyimpanan penuh!\n");
            }
        } 
        else if (pilih == 2) {
            if (n > 0) {
                n--;
                printf("Barang terakhir dihapus.\n");
            } else {
                printf("Tidak ada barang untuk dihapus.\n");
            }
        } 
        else if (pilih == 3) {
            total = 0;
            for (int i = 0; i < n; i++) {
                total += barang[i];
            }
            printf("Jumlah barang: %d\n", n);
            printf("Total harga: %d\n", total);
        }

    } while (pilih != 0);

    return 0;
}