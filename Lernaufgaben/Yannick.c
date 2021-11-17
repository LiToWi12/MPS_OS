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



//Aufgabe Kreisberechnung

#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

float radius;

void main() {

    printf("Geben Sie den Radius ein.\n");
    scanf_s("%f", &radius);
    printf("Der Umfang des Kreises mit dem Radius %f beträgt %f.\n", radius, (2 * radius * M_PI));
    printf("Der Flächeninhalt beträgt %f.", (radius * M_PI * M_PI));

}
