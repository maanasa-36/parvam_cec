#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: \n");
    fgets(str, sizeof(str), stdin);
    while (str[length] != '\0') {
        length++;
    }
    printf("Length of the string is: %d\n", length - 1);

    return 0;
}
