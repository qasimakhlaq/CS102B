#include <stdio.h>
#include <math.h>

void main()
{
        int x1 = -1; 
        int x2 = 10;
        int y1 = 5;
        int y2= -3;
        float distance = ((x2-x1) * (x2-x1)) + ((y2-y1) * (y2-y1));
        double num = distance, squareRoot;
        squareRoot =  sqrt(num);
        printf("Square root of %lf =  %lf", num, squareRoot);
        return;

}
