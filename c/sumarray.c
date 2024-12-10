#include <stdio.h>
int main() {
    int arr[4] = {1, 2, 3, 4}; 
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += arr[i]; 
    }printf("Sum of elements in the array is %d\n", sum);
    return 0;
}
