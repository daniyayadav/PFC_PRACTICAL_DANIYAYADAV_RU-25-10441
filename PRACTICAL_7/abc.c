#include <stdio.h>

int main() {
    // Daniya Yadav
    //RU-25-10441
    //a
    //ab
    //abc
    //abcd
    int i, j;

    for (i = 1; i <= 4; i++) {
        for (j = 0; j < i; j++) {
            printf("%c", 'a' + j);
        }
        printf("\n");
    }

    return 0;
}
