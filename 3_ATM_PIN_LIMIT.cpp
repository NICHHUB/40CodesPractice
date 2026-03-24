#include <stdio.h>

int main() {
    int pin, saldo = 1000000, pilih;
    int tarik, setor;

    printf("Masukkan PIN: ");
    scanf("%d", &pin);

    if (pin != 1234) {
        printf("PIN salah\n");
        return 0; //langsung keluar
    }

    printf("1.Tarik 2.Setor 3.Cek saldo\n");
    scanf("%d", &pilih);

    if (pilih == 1) {
        printf("Jumlah tarik: ");
        scanf("%d", &tarik);

        if (tarik > saldo) {
            printf("Saldo kurang\n");
        } else if (tarik > 500000) {
            printf("Lewat limit harian\n"); //limit
        } else {
            saldo -= tarik;
        }
    } 
    else if (pilih == 2) {
        printf("Jumlah setor: ");
        scanf("%d", &setor);
        saldo += setor;
    }

    printf("Saldo sekarang: %d\n", saldo);
}