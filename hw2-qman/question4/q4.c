#include <stdio.h>

/* Prints the conversion of a given Kelvin to Fahrenheit */ 

void main ()
{
        int kelvin = 777;
        int fahrenheit;
        fahrenheit = (kelvin-273.15) * 9/5 +32;
        printf("%d\n", fahrenheit);

        return;
}
