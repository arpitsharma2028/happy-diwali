#include <stdio.h>

int main() {
    char YourName[50]; // Use a char array to store the name
    printf("Enter your name\n");
    scanf("%s", YourName); // Use %s for a string input
    printf("Happy Diwali %s \n", YourName); // Print the name with %s

    return 0;
}
