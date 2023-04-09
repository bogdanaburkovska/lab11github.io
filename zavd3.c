#include <stdio.h>
#include <math.h>

int main() {
    double x = 0.0;
    double y = pow(x, 3) - 4 * pow(x, 2) - 5 * x + 9 + cos(x);
  //значення функції при x = 0 дорівнює 10

    printf("При x = %lf, y = %lf\n", x, y);

    return 0;
}
