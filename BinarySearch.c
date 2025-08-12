
#include <stdio.h>
#include <stdlib.h>
int binarySearch(int arr[], int size, int target);
int main() {
    int size, target;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 0;
    }
    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target element to search: ");
    scanf("%d", &target);
    int result = binarySearch(arr, size, target);
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    }
    else {
        printf("Element not found in the array\n");
    }
    free(arr);
    return 0;
}