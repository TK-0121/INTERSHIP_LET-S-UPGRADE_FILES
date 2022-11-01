//Header Files needed
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
//Initialize function circle to find the area of the circle.
double circle(int R){
    return M_PI*(R*R);
}
//Driven Code
int main(){
    printf("Area of the circle is: %f", circle(10));
    return 0;
}