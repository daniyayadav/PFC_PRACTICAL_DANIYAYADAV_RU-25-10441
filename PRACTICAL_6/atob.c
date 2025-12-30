#include <stdio.h>

int main() {
    // Daniya Yadav
    //RU-25-10441
    //Enter a and b: 1
    //10
    //1 2 3 4 5 6 7 8 9 10   
    int a, b, i;

    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    for (i = a; i <= b; i++) {
        printf("%d ", i);
    }

    return 0;
}
