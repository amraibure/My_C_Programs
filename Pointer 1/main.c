void min_max(int *arr, int size, int *min, int *max) {
    *min = *max = arr[0]; // initialize min and max to the first element of the array
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i]; // update min if we find a smaller element
        }
        if (arr[i] > *max) {
            *max = arr[i]; // update max if we find a larger element
        }
    }
}

int main() {
    int arr[] = {5, 2, 8, 1, 9};
    int min, max;
    min_max(arr, 5, &min, &max); // pass min and max by reference
    printf("min: %d\n", min); // Output: min: 1
    printf("max: %d\n", max); // Output: max: 9
    return 0;
}