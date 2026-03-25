#include <stdio.h>

int main() {
    int hari, member, shuttle;
    float total;

    printf("Lama parkir (hari): ");
    scanf("%d",&hari);

    printf("Member (1/0): ");
    scanf("%d",&member);

    printf("Pakai shuttle? (1/0): ");
    scanf("%d",&shuttle);

    total = hari * 50000;

    if(hari>3) total *= 0.85; //diskon lama

    if(member) total *= 0.9;

    if(shuttle) total += 20000;

    printf("Total: %g\n", total);
}