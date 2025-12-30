#include <stdio.h>

int main() {
    // Daniya Yadav
    //RU-25-10441
    //Enter a number: 678
    //Sum of even numbers = 115260
    int n, i, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
    }

    printf("Sum of even numbers = %d", sum);
    return 0;
}
