#include <stdio.h>
#include <math.h>

int main() {
    int a = 5;
    int b = 4;
    int c = 3;

    double A;
    A = pow(a, 3) + pow(b, 2) + 2 * c + sqrt(a + b - c);

    printf("Gia tri cua bieu thuc A la: %lf\n", A);

    return 0;
}
