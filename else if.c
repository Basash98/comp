#include <stdio.h>

int main() {
    int i, sum = 0;

    for (i = 2; i <= 10; i += 2) {
        printf("%d ", i);
        sum += i;
    }

    printf("\nSum of even numbers: %d\n", sum);

    return 0;
}




