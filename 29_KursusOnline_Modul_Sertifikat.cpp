#include <stdio.h>

int main() {
    int modul, sertifikat;
    float total;

    printf("Jumlah modul: ");
    scanf("%d",&modul);

    printf("Sertifikat (1/0)? ");
    scanf("%d",&sertifikat);

    total = modul*100000;

    if(sertifikat) total += 50000;

    printf("Total: %.0f\n", total);
}