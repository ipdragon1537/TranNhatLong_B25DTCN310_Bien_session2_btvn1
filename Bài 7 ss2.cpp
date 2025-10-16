#include <stdio.h>

int main() {
    int number = 12345;
    int sum = 0;
    int digital1 = number % 10;
    int digital2 = (number/10) % 10;
    int digital3 = (number/100) % 10;
    int digital4 = (number/1000) % 10;
    int digital5 = (number/10000) % 10;
    
    sum = digital1 + digital2 + digital3 + digital4 + digital5;
    printf("don vi = %d\n", digital1);
    printf("chuc = %d\n", digital2);
    printf("tram = %d\n", digital3);
    printf("nghin = %d\n", digital4);
    printf("chuc nghin = %d\n", digital5);
    printf("tong = %d\n", sum);

    return 0;
}
