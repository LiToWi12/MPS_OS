//Aufgabe 1.8
#include <stdio.h>

int days = 747244;

void main() {
    
    printf("Jahre: %d\n", (days / 365));
    days = days % 365;
    printf("Wochen: %d\n", (days / 7));
    days = days % 7;
    printf("Tage: %d\n", days);
    

}
