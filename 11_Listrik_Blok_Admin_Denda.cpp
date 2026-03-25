#include <stdio.h>

int main() {
    int kwh, telat;
    float total;

    printf("Pemakaian kWh (Contoh untuk apart studio biasanya 50-100 kWh per bulan): ");
    scanf("%d",&kwh);

    printf("Telat bayar? (1/0): ");
    scanf("%d",&telat);

    if(kwh<=100) total=kwh*1000;
    else if(kwh<=200) total=100000+(kwh-100)*1500;
    else total=100000+150000+(kwh-200)*2000;

    total+=5000; //admin

    if(telat) total+=20000; //denda

    printf("Tagihan: %g\n", total);
}