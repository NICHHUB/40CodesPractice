#include <stdio.h>

int main() {
    int dewasa, anak, parkir;
    float total;

    printf("Jumlah dewasa: ");
    scanf("%d",&dewasa);

    printf("Jumlah anak: ");
    scanf("%d",&anak);

    printf("Parkir? (1/0): ");
    scanf("%d",&parkir);

    total = dewasa*50000 + anak*25000;

    if(parkir) total += 10000;

    if(dewasa+anak>=5) total*=0.9;

    printf("Total: %.0f\n", total);
}