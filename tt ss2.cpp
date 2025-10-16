#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
int a = 1;
int b = 2;
int c = 3;
double S;
S = (pow(a, 2) + sqrt(pow(b, 2) + 4 * a * c)) / (2 * a) - (pow(b, 3) / pow(c, 2)) + sqrt(abs(a - b));
printf("Ket qua cua bieu thuc la: %f\n", S);
    return 0;
}
