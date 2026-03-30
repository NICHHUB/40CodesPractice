#include <stdio.h>
#include <stdlib.h> //karna pake rand
#include <time.h> //karna pake time untuk seed random
int main() {
    char menu[5][20] = {"Warteg", "Nasi Padang", "Soto Ayam", "Mie Ayam", "Bakso"};
    int kocok;
    srand(time(NULL)); 
    printf("Bingung makan apa? Tekan ENTER untuk pilih...");
    getchar(); // Menunggu enter
    kocok = rand() % 5; // buat random antara 0-4
    printf("Hari ini kamu makan di: %s!\n", menu[kocok]);
}