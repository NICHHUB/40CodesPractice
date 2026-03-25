#include <stdio.h>

int main() {
    int jam, mulai, member;
    float total=0, dp=50000;

    printf("Jumlah jam: ");
    scanf("%d",&jam);

    printf("Mulai jam: ");
    scanf("%d",&mulai);

    printf("Member (1/0): ");
    scanf("%d",&member);

    for(int i=0;i<jam;i++){
        if(mulai+i>=18) total+=150000;
        else total+=100000; //malam lebih mahal
    }

    if(member) total*=0.9;

    total+=dp; //uang muka

    printf("Total bayar: %g\n", total);
}