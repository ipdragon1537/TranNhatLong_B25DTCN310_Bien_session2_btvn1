#include <stdio.h>

int main() {
    int number = 12345;
    int result = 0;

    while (number > 0) {
        int digit = number % 10;
        result = result * 10 + digit;
        number = number / 10;
    }

    printf("So dao nguoc la: %d\n", result);

    return 0;
}
