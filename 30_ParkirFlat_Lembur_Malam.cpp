#include <stdio.h>

int main() {
    int jam;
    float total=5000;

    printf("Jam parkir (1-24): ");
    scanf("%d",&jam);

    if(jam>2) total += (jam-2)*3000;

    if(jam>5) total += 10000; //lembur

    printf("Total: %.0f\n", total);
}