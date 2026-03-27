#include <stdio.h>

int main() {
    int n, topping;
    float harga, total=0;

    printf("Jumlah minuman: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Harga minuman: ");
        scanf("%f",&harga);
        total += harga;
    }

    printf("Tambah topping semua? (1/0): ");
    scanf("%d",&topping);

    if(topping) total += n*5000;

    if(total>100000) total*=0.9;

    printf("Total: %.0f\n", total);
}