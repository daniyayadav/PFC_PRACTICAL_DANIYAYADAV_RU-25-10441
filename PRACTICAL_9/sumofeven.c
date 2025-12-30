#include <stdio.h>

int main() {
    // Daniya Yadav
    //RU-25-10441
    //Enter size of array: 3
//Enter elements:
//1
//2
//3
//Sum of even elements = 2


    int n, i, sum = 0;
    int a[100];

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            sum += a[i];
    }

    printf("Sum of even elements = %d", sum);

    return 0;
}
