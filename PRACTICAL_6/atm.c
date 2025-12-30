#include <stdio.h>

int main() {
    // Daniya Yadav
    //RU-25-10441
    // OUTPUT:Enter User ID: 101
    //Enter Password: 2025
    //Authentication Successful
    //Enter User ID: 676
    //Enter Password: 7878 
    //Authentication Failed
    int userId, password;

    printf("Enter User ID: ");
    scanf("%d", &userId);

    printf("Enter Password: ");
    scanf("%d", &password);

    if (userId == 101 && password == 2025) {
        printf("Authentication Successful\n");
    } else {
        printf("Authentication Failed\n");
    }

    return 0;
}