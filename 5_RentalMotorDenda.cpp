#include <stdio.h>

int main() {
    int jenis = 0;              //pilihan jenis kendaraan (1-3)
    int hari = 0, telat = 0;    //lama sewa dan jumlah hari telat

    long long hargaPerHari = 0; //tarif sewa per hari
    long long dendaPerHari = 0; //denda keterlambatan per hari
    long long total = 0;
    long long subtotalSewa = 0;
    long long subtotalDenda = 0;
    const char* namaKendaraan = "";

    printf("=== RENTAL KENDARAAN ===\n");
    printf("Pilih jenis kendaraan:\n");
    printf("1. Motor (Rp 50000/hari, denda Rp 20000/hari)\n");
    printf("2. Mobil (Rp 200000/hari, denda Rp 50000/hari)\n");
    printf("3. Truk  (Rp 300000/hari, denda Rp 75000/hari)\n");
    printf("Pilihan (1-3): ");
    if (scanf("%d", &jenis) != 1) {
        printf("Input tidak valid.\n");
        return 1;
    }

    switch (jenis) {
        case 1:
            hargaPerHari = 50000;
            dendaPerHari = 20000;
            namaKendaraan = "Motor";
            break;
        case 2:
            hargaPerHari = 200000;
            dendaPerHari = 50000;
            namaKendaraan = "Mobil";
            break;
        case 3:
            hargaPerHari = 300000;
            dendaPerHari = 75000;
            namaKendaraan = "Truk";
            break;
        default:
            printf("Pilihan jenis kendaraan tidak ada.\n");
            return 1;
    }

    printf("Jumlah hari sewa: ");
    if (scanf("%d", &hari) != 1 || hari < 0) {
        printf("Input jumlah hari tidak valid.\n");
        return 1;
    }

    printf("Telat (hari): ");
    if (scanf("%d", &telat) != 1) {
        printf("Input telat tidak valid.\n");
        return 1;
    }
    if (telat < 0) telat = 0;

    //itungan sewa sama denda
    subtotalSewa = (long long)hari * hargaPerHari;
    subtotalDenda = (telat > 0) ? ((long long)telat * dendaPerHari) : 0;
    total = subtotalSewa + subtotalDenda;

    printf("\n=== RINCIAN BAYAR ===\n");
    printf("Jenis kendaraan   : %s\n", namaKendaraan);
    printf("Tarif per hari    : Rp %lld\n", hargaPerHari);
    printf("Hari sewa         : %d\n", hari);
    printf("Subtotal sewa     : Rp %lld\n", subtotalSewa);
    printf("Telat (hari)      : %d\n", telat);
    printf("Denda per hari    : Rp %lld\n", dendaPerHari);
    printf("Subtotal denda    : Rp %lld\n", subtotalDenda);
    printf("Total bayar       : Rp %lld\n", total);
}