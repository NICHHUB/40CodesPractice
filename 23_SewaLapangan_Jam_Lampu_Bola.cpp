#include <stdio.h>

int main() {
    int jam, lampu, bola;
    float total;

    printf("Jam sewa: ");
    scanf("%d",&jam);

    printf("Pakai lampu? (1/0): ");
    scanf("%d",&lampu);

    printf("Sewa bola? (1/0): ");
    scanf("%d",&bola);

    total = jam*100000;

    if(lampu) total += jam*20000;
    if(bola) total += 30000;

    printf("Total: %.0f\n", total);
}