#include <stdio.h>
#include <math.h>
#include <locale.h>
#define PI 3.14159265358979323846

int main() {
    setlocale(LC_CTYPE, "RUS");


    double x = 3.251;
    double y = 0.325;
    double z = 0.0000466;

    double term1 = pow(2.0, pow(y, x));
    double term2 = pow(pow(3.0, x), y);
    double numerator = y * (atan(z) - PI / 6.0);
    double denominator = fabs(x) + 1.0 / (y * y + 1.0);
    double term3 = numerator / denominator;

    double c = term1 + term2 - term3;

    printf("Результат: %.6f\n", c);

    return 0;
}

      




