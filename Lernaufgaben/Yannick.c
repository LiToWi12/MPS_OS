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



// Aufgabe 1.1 modifiziert

#include <stdio.h>

char name[30];
int age;

void main() {
    
    printf("Dein Name ist?\n");
    scanf("%s", &name);
    printf("Dein Alter ist?\n");
    scanf("%d", &age);
    printf("Du bist %s und bist %03d Jahre alt!", name, age);
    
}
