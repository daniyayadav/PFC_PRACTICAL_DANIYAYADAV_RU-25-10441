#include <stdio.h>
// Daniya Yadav
    //RU-25-10441
    //Enter size: 4
//Enter elements:
//6
//7
//8
//3
//Reversed array:
//3 8 7 6

int main() {
    int n, i, temp;
    int a[100];

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    printf("Reversed array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
