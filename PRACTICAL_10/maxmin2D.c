#include <stdio.h>

int main() { 
    // Daniya Yadav
    //RU-25-10441
    //Enter number of rows and columns: 3
// 4
// Enter elements of the array:
// 2
// 4
// 5
// 6
// 6
// 5
// 7
// 6
// 7
// 7
// 4
// 7
// Maximum = 7
// Minimum = 2
    int i, j, rows, cols;
    int a[10][10];
    int max, min;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    max = min = a[0][0];

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (a[i][j] > max)
                max = a[i][j];
            if (a[i][j] < min)
                min = a[i][j];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d", min);

    return 0;
}
