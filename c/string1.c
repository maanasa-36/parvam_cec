#include <stdio.h>

int main() {
    char arr[6];
    int index = 0;

    printf("Enter 5 elements in the array:\n");
    fgets(arr, sizeof(arr), stdin); 

    printf("The String is:\n");
    for (int i = 0; i < 5; i++) {
        printf("%c ", arr[i]); 
    }

    return 0;
}