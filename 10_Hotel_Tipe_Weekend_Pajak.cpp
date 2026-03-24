#include <stdio.h>

int main() {
    int tipe, malam, weekend;
    float harga, total;

    printf("Tipe kamar (1/2/3): ");
    scanf("%d",&tipe);

    printf("Jumlah malam: ");
    scanf("%d",&malam);

    printf("Weekend? (1/0): ");
    scanf("%d",&weekend);

    if(tipe==1) harga=250000;
    else if(tipe==2) harga=400000;
    else harga=600000; //pilih tipe

    total = harga*malam;

    if(weekend==1){ total*=1.2; //weekend naik
    } else if(weekend==0 && malam>=3) total*=0.9; //bukan weekend tapi lama, diskon
    if(weekend!=1 && weekend!=0) {
        printf("Input weekend tidak valid.\n");
        return 1;
    }
    
    if(malam>=3) total*=0.9; //diskon

    total*=1.1; //pajak

    printf("Total bayar: %g\n", total);
}