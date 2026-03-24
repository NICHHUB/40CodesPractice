#include <stdio.h>

int main() {
    int jenis, jamMasuk, jamKeluar, lama;
    int member, tiketHilang;
    int tarif = 0, total = 0;

    printf("Jenis (1=Motor,2=Mobil): ");
    scanf("%d", &jenis);

    printf("Jam masuk (1-24): ");
    scanf("%d", &jamMasuk);

    printf("Jam keluar (1-24): ");
    scanf("%d", &jamKeluar);

    printf("Member? (1/0): ");
    scanf("%d", &member);

    printf("Tiket hilang? (1/0): ");
    scanf("%d", &tiketHilang);

    lama = jamKeluar - jamMasuk; //hitung lama parkir

    if (tiketHilang == 1) {
        if (jenis == 1) total = 20000;
        else total = 50000; //denda flat
    } else {
        if (jenis == 1) tarif = 2000;
        else tarif = 5000; //tarif awal

        if (lama > 1) {
            total = tarif + (lama - 1) * (tarif / 2); //jam berikutnya lebih murah
        } else {
            total = tarif;
        }

        if (member == 1) {
            total = total * 0.8; //diskon member
        }
    }

    printf("Total: %d\n", total);
}