#include <stdio.h>

int main() {
    int kwh;
    float total;

    printf("Pemakaian kWh: ");
    scanf("%d",&kwh);

    total = kwh*1200;

    if(kwh>200) total*=1.1;

    total += 10000; //abonemen

    printf("Tagihan: %.0f\n", total);
}