#include <stdio.h>

int main() {
    float jarak;
    int tol;
    float total;

    printf("Jarak (km): ");
    scanf("%f",&jarak);

    printf("Lewat tol? (1/0): ");
    scanf("%d",&tol);

    total = (jarak/12)*10000; //bbm

    if(tol) total += 50000;

    if(jarak>200) total *= 0.95; //diskon jauh

    printf("Biaya: Rp. %.0f.00\n", total);
}