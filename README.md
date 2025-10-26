## Условие:
<img width="791" height="115" alt="image" src="https://github.com/user-attachments/assets/23bf1822-7bb1-4858-97c7-b761c1b5f43f" />
## Код:

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

## Результат работы программы:
Результат: 4.251433

# Информация о разработчике:
Литинский Марк бИЦ-251


