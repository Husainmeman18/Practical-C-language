#include <stdio.h>

void addArrays(int *arr1, int *arr2, int n) {
    int sum[n];
    for (int i = 0; i < n; i++) {
        sum[i] = *(arr1 + i) + *(arr2 + i);
    }
    printf("Sum of the arrays: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }
}

int main() {
    int n;
    printf("Enter the size of the arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];

    printf("Enter elements of array 1: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter elements of array 2: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    addArrays(arr1, arr2, n);

    return 0;
}