#include<stdio.h>
int main()
{
    int x,y;
    float radius, angle_degrees;
    printf("enter x :");
    scanf("%d",&x);
    printf("enter y :");
    scanf("%d",&y);
    float pi_approx = 3.14;
    radius = (x >= 0 ? x : -x) + (y >= 0 ? y : -y); 
    if (x == 0 && y == 0) {
        angle_degrees = 0; 
    } else if (y == 0) {
        angle_degrees = (x > 0) ? 0 : 180; 
    } else if (x == 0) {
        angle_degrees = (y > 0) ? 90 : 270; 
    } else
    {
        angle_degrees = (y / x) * (180 / pi_approx);
    }
    printf("\n-> The APPROXIMATE polar coordinates are:\n");
    printf("\nApproximate Radius (r): %.2f\n", radius);
    printf("Approximate Angle (theta): %.2f degrees\n\n", angle_degrees);
    return 0;
}