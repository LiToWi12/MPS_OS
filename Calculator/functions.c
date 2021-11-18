#include <stdio.h>

// Scaffolding function for a better multiplicator
int Multiplication(int first, int second){
        // Initialising the helpvariables
        int helpvar = 0;
        int  help = 0;

        // If the first var is negative help is increased by 1 and the value of first is set to it's positive equivalent
        if(first<0){
                first = -first;
                help += 1;
        }
        // If the second var is negative help is increased by 1; The Value of the second var is also set to it's positive equivalent
        if(second<0){
                second = -second;
                help  += 1;
        }
        // Main multipling process
        for(int copy = first; copy>0; --copy){
                helpvar = helpvar+second;
        }
        // If only one of the factors was negative help was set to 1; the product will be negative
        if(help == 1){
                helpvar = -helpvar;
        }

        return helpvar;
}
