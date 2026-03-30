#include <stdio.h>
int main() {
    int absen[31] = {0}, no, hadir = 0;
    printf("Input nomor absen (1-30), ketik 0 untuk selesai:\n");
    while (1) {
        printf("No Absen: "); scanf("%d", &no);
        if (no == 0) break;
        if (no > 0 && no <= 30) {
            if (absen[no] == 0) { absen[no] = 1; hadir++; }
        }
    }
    printf("Total siswa hadir: %d. Siswa bolos: ", hadir);
    for (int i = 1; i <= 30; i++) if (absen[i] == 0) printf("%d ", i);
}