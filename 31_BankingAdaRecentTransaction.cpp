#include <stdio.h>

int main() {
    int saldo = 1000000, riwayat[10], i_riwayat = 0;
    int pilih, nominal;

    do {
        printf("\nSaldo Anda: Rp %d\n", saldo);
        printf("1. Tarik Tunai\n2. Setor Tunai\n3. Riwayat\n0. Keluar\nPilih: ");
        scanf("%d", &pilih);

        if (pilih == 1 || pilih == 2) {
            printf("Nominal: "); scanf("%d", &nominal);
            if (pilih == 1 && nominal <= saldo) {
                saldo -= nominal;
                riwayat[i_riwayat % 10] = -nominal; // Gunakan modulo agar melingkar
                i_riwayat++;
            } else if (pilih == 2) {
                saldo += nominal;
                riwayat[i_riwayat % 10] = nominal;
                i_riwayat++;
            } else printf("Saldo tidak cukup!\n");
        } else if (pilih == 3) {
            printf("Riwayat Transaksi Terakhir:\n");
            int batas = (i_riwayat < 10) ? i_riwayat : 10;
            for(int i=0; i<batas; i++) printf("%d. %d\n", i+1, riwayat[i]);
        }
    } while (pilih != 0);
    return 0;
}