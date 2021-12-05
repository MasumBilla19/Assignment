//11. Write a C program to calculate the sum of the elements of an Array.

#include <stdio.h>

int main() {
    int n, sum = 0;

    //User Defined Number
    printf("Enter size of the array: ");
    scanf("%d", &n);


    int arr[n];
    //Input elements in array
    printf("Enter %d size of the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i  = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Sum of all elements of Array = %d", sum);

    return 0;
}


