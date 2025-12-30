#include <stdio.h>
// Daniya Yadav
    //RU-25-10441
    //Enter two numbers: 5
    //6
    //After swapping:
    //x = 6
    //y = 5
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("After swapping:\n");
    printf("x = %d\ny = %d", x, y);

    return 0;
}
