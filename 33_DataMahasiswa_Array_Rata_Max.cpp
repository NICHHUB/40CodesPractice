#include <stdio.h>

int main() {
    int n;
    float nilai[100], total=0, max;

    printf("Jumlah data: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        printf("Nilai: ");
        scanf("%f",&nilai[i]);
        total+=nilai[i];

        if(i==0 || nilai[i]>max) max=nilai[i]; //max
    }

    printf("Rata2: %g\n", total/n);
    printf("Tertinggi: %g\n", max);
}