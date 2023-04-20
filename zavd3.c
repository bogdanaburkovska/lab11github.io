#include <stdio.h>
#include <math.h>

int main() {
float x, y;
printf("Введіть x: ");
scanf("%f", &x);
y = pow(x, 3) - 4 * pow(x, 2) - 5 * x + 9 + cos(x);
    printf("При x = %.2lf, y = %.2lf\n", x, y);
    return 0;
}
