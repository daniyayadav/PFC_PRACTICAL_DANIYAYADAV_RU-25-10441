#include <stdio.h>

int main() {
     // Daniya Yadav
    //RU-25-10441
//     Enter number of rows and columns: 2
// 2
// Enter elements of the array:
// 1
// 2
// 3
// 4
// Sum of row 1 = 3
// Sum of row 2 = 7
    int i, j, rows, cols;
    int a[10][10];

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < rows; i++) {
        int sum = 0;
        for (j = 0; j < cols; j++) {
            sum += a[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
