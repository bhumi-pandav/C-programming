#include <stdio.h>

int main() {
  float x, y;

  printf("Enter the x-coordinate: ");
  scanf("%f", &x);

  printf("Enter the y-coordinate: ");
  scanf("%f", &y);

  if (x == 0 && y == 0) {
    printf("The point (%.2f, %.2f) lies on the origin.\n", x, y);
  } else if (x == 0) {
    printf("The point (%.2f, %.2f) lies on the Y-axis.\n", x, y);
  } else if (y == 0) {
    printf("The point (%.2f, %.2f) lies on the X-axis.\n", x, y);
  } else {
    printf("The point (%.2f, %.2f) does not lie on the X-axis, Y-axis, or origin.\n", x, y);
  }

  return 0;
}