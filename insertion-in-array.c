#include <stdio.h>

int main() {
    int array[100]; // Declare an array with a maximum capacity of 100
    int size, i, element, position;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    if (size > 100) {
        printf("Error: Array size exceeds maximum capacity.\n");
        return 1;
    }

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    printf("Enter the position (1 to %d) to insert the element: ", size + 1);
    scanf("%d", &position);

    // Validate position
    if (position < 1 || position > size + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right to make space for the new element
    for (i = size; i >= position; i--) {
        array[i] = array[i - 1];
    }

    // Insert the new element at the specified position
    array[position - 1] = element;

    // Increment the size
    size++;

    // Print the updated array
    printf("Resultant array is:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
