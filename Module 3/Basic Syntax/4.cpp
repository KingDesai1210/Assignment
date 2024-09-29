#include <stdio.h>

int main() {
    float a,A ;

    printf("Enter the side length of the square: ");
    scanf("%f", &a);

    A = a * a;

    printf("Area of the Square: %.2f\n", A);

    return 0;
}
