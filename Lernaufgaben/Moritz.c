#include <stdio.h>

int main()
{
    int a =12;
    int *b = NULL;
    int c =13;
    int *d = NULL;
    int e = NULL;
    
    
    printf("a-Wert\t");
    scanf("%d" , &a);
    printf("c-Wert\t");
    scanf("%d" , &c);
    
    b =  &a;
    d =  &c;
    e=*b+*d;
    
    printf("\na-Wert: %d\n" , a);
    printf("c-Wert: %d\n" , c);
    printf("e-Wert: %d\n" , e);
}

