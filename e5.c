#include <stdio.h>
#include <math.h>

int main() {
    float angle_degrees, angle_radians;

    printf("Enter the angle in degrees: ");
    scanf("%f", &angle_degrees);

    angle_radians = angle_degrees * M_PI / 180.0;

    printf("Sine: %f\n", sin(angle_radians));
    printf("Cosine: %f\n", cos(angle_radians));
    printf("Tangent: %f\n", tan(angle_radians));
    printf("Cosecant: %f\n", 1 / sin(angle_radians));
    printf("Secant: %f\n", 1 / cos(angle_radians));
    printf("Cotangent: %f\n", 1 / tan(angle_radians));

    return 0;
}