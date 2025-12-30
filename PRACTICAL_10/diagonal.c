#include <stdio.h>

int main() {
     // Daniya Yadav
    //RU-25-10441
//     Enter size of square matrix: 2
// Enter elements of the matrix:
// 12
// 23
// 22
// 33
//Sum of diagonal elements = 45
    int i, j, n, sum = 0;
    int a[10][10];

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        sum += a[i][i];  
    }

    printf("Sum of diagonal elements = %d", sum);

    return 0;
}
