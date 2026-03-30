#include <stdio.h>

int main() {
    int pc[11]; // Indeks 1-10 untuk nomor PC
    int pilih, no_pc, durasi;
    
    // Inisialisasi semua PC kosong (0)
    for(int i = 1; i <= 10; i++) pc[i] = 0;

    do {
        printf("\n=== SISTEM BOOKING WARNET ===");
        printf("\n1. Lihat Status PC");
        printf("\n2. Booking PC");
        printf("\n3. Checkout / Selesai");
        printf("\n0. Keluar");
        printf("\nPilih menu: ");
        scanf("%d", &pilih);

        if (pilih == 1) {
            printf("\nStatus PC (1-10):\n");
            for (int i = 1; i <= 10; i++) {
                printf("PC %02d: [%s]  ", i, (pc[i] == 0) ? "KOSONG" : "TERISI");
                if (i % 2 == 0) printf("\n");
            }
        } 
        else if (pilih == 2) {
            printf("Masukkan nomor PC (1-10): ");
            scanf("%d", &no_pc);

            if (no_pc < 1 || no_pc > 10) {
                printf("Nomor PC tidak valid!\n");
            } else if (pc[no_pc] == 1) {
                printf("Maaf, PC %d sedang digunakan.\n", no_pc);
            } else {
                printf("Masukkan durasi (jam): ");
                scanf("%d", &durasi);
                pc[no_pc] = 1;
                printf("PC %d berhasil dibooking selama %d jam.\n", no_pc, durasi);
                printf("Total biaya: Rp %d\n", durasi * 5000); // Contoh harga 5rb/jam
            }
        } 
        else if (pilih == 3) {
            printf("Masukkan nomor PC yang selesai: ");
            scanf("%d", &no_pc);
            if (pc[no_pc] == 1) {
                pc[no_pc] = 0;
                printf("PC %d sekarang kosong.\n", no_pc);
            } else {
                printf("PC memang sedang tidak digunakan.\n");
            }
        }

    } while (pilih != 0);

    printf("Terima kasih!\n");
}