#include <stdio.h>
#include <string.h>

struct Barang {
    char nama[30];
    int stok;
    float harga;
};

int main() {
    struct Barang gudang[50];
    int n = 0, pilih;
    char cari[30];

    do {
        printf("\n1. Tambah Barang\n2. Lihat Semua\n3. Cari Barang\n0. Keluar\nPilih: ");
        scanf("%d", &pilih);

        if (pilih == 1) {
            printf("Nama: "); scanf("%s", gudang[n].nama);
            printf("Stok: "); scanf("%d", &gudang[n].stok);
            printf("Harga: "); scanf("%f", &gudang[n].harga);
            n++;
        } else if (pilih == 3) {
            printf("Cari nama barang: "); scanf("%s", cari);
            for(int i=0; i<n; i++) {
                if(strcmp(gudang[i].nama, cari) == 0) {
                    printf("Ditemukan! Stok: %d, Harga: %.2f\n", gudang[i].stok, gudang[i].harga);
                }
            }
        }
    } while (pilih != 0);
    return 0;
}