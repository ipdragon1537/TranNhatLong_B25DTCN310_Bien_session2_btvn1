#include <stdio.h>
#include <math.h>

int main() {
    int a = 10;
    int b = 5;
    int c = 2;
    double S;
    S = sqrt(a * a + b * b) / (c + 1) + (double)(a * b) / c - sqrt(fabs(a - b) + c * c);
    printf("Gia tri cua bieu thuc S la: %lf\n", S);
    return 0;
}

