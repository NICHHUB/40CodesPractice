#include <stdio.h>

int main() {
    char nama[30];
    int jam, gol;
    float gapok, lembur = 0, total, pajak;

    printf("Nama Karyawan: "); scanf("%s", nama);
    printf("Golongan (1/2): "); scanf("%d", &gol);
    printf("Total Jam Kerja sebulan: "); scanf("%d", &jam);

    gapok = (gol == 1) ? 3000000 : 5000000;
    
    // Logika lembur jika kerja > 160 jam
    if (jam > 160) {
        lembur = (jam - 160) * 25000;
    }

    total = gapok + lembur;
    pajak = total * 0.05; // Pajak 5%

    printf("\n--- SLIP GAJI ---\nNama: %s\nGaji Pokok: %.0f\nLembur: %.0f\nPajak (5%%): %.0f\n", nama, gapok, lembur, pajak);
    printf("Gaji Bersih: Rp %.0f\n", total - pajak);
    return 0;
}