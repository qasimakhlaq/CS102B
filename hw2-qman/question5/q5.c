#include <stdio.h>
#define PI 3.14 


void main()
{
        int radius = 6371;
        float volume = 4 * (PI * radius * radius * radius) / 3;
        printf("%f", volume);
        return;
}        
