
#include <stdio.h>

int main() {
    int a = 48;
    int b = 18;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("GCD = %d\n", a);

    return 0;
}

