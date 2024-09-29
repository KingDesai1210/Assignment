#include <stdio.h>
#define PI 3.14159  

int main() {
    float r,a,c;

    printf("Enter the radius of the circle: ");
    scanf("%f", &r);

    a = PI * r * r;                    
    c = 2 * PI * r;                

    printf("Area of the Circle: %.2f\n", a);
    printf("Circumference of the Circle: %.2f\n", c);

    return 0;
}
