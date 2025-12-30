#include <stdio.h>

int main() {
    // Daniya Yadav
    //RU-25-10441
    //Enter size: 4
//Enter elements:
//3
//5
//7
//6
//Maximum = 7
//Minimum = 3

    int n, i;
    int a[100];
    int max, min;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = min = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);

    return 0;
}
