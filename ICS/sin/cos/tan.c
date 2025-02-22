#include <stdio.h>
#include <math.h>

int main() {
    double angle, sine, cosine, tangent;

    printf("Enter an angle in radians: ");
    scanf("%lf", &angle);

    sine = sin(angle);
    cosine = cos(angle);
    tangent = tan(angle);

    printf("Sine = %.2lf\n", sine);
    printf("Cosine = %.2lf\n", cosine);
    printf("Tangent = %.2lf\n", tangent);

    return 0;
}