#include <stdio.h>

float number[100];
char op[100];

void input() {

    int i = 0;
    int boolean = 0;
    float numberTmp;
    float opTmp;

    while (boolean == 0) {

        printf("eins");
        scanf("%f", &numberTmp);
        printf("zwei");
        scanf("%c", &opTmp);

        number[i] = numberTmp;
        op[i] = opTmp;

        if (opTmp == '=') {
            boolean = 1;
        }

        i++;

    }

}


void main() {

    input();
    
    printf("Hi!");

}

