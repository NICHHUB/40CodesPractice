#include <stdio.h>

int main() {
    int n;
    float harga[100], total=0;

    printf("Jumlah barang: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Harga: ");
        scanf("%f",&harga[i]);
        total+=harga[i]; //jumlah array
    }

    if(n>=5) total*=0.9;
    if(total>200000) total-=20000;

    printf("Total: %.0f\n", total);
}