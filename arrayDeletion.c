#include <stdio.h>

int main() {
    int arr[50]; // Declare an array with a maximum size
    int n, pos, i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the position (index) to delete: ");
    scanf("%d", &pos);

    // Validate the position
    if (pos < 0 || pos >= n) {
        printf("Invalid position. Please enter a position within the array bounds (0 to %d).\n", n - 1);
    } else {
        // Shift elements to the left
        for (i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // Decrease the array size

        printf("\nArray after deletion:\n");
        for (i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
