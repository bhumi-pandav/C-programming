#include <stdio.h>
#include <stdlib.h>

#define MAX_ROWS 10
#define MAX_COLS 10

void displayArray(int arr[][MAX_COLS], int rows, int cols) {
    printf("\n--- Array Content ---\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("---------------------\n");
}

void insertElement(int arr[][MAX_COLS], int *rows, int *cols) {
    if (*rows >= MAX_ROWS || *cols >= MAX_COLS) {
        printf("\nError: Array is full. Cannot insert more elements.\n");
        return;
    }
    int r, c, val;
    printf("Enter row index to insert (0 to %d): ", *rows -1);
    scanf("%d", &r);
    printf("Enter column index to insert (0 to %d): ", *cols -1);
    scanf("%d", &c);
    if (r < 0 || r >= *rows || c < 0 || c >= *cols) {
        printf("\nError: Invalid row or column index.\n");
        return;
    }
    printf("Enter value to insert: ");
    scanf("%d", &val);
    arr[r][c] = val;
    printf("\nElement inserted successfully.\n");
}

void deleteElement(int arr[][MAX_COLS], int rows, int cols) {
    int r, c;
    printf("Enter row index to delete (0 to %d): ", rows -1);
    scanf("%d", &r);
    printf("Enter column index to delete (0 to %d): ", cols -1);
    scanf("%d", &c);
    if (r < 0 || r >= rows || c < 0 || c >= cols) {
        printf("\nError: Invalid row or column index.\n");
        return;
    }
    arr[r][c] = 0;
    printf("\nElement at (%d, %d) deleted (set to 0).\n", r, c);
}

void searchElement(int arr[][MAX_COLS], int rows, int cols) {
    int val;
    printf("Enter value to search: ");
    scanf("%d", &val);
    int found = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == val) {
                printf("\nValue %d found at (%d, %d).\n", val, i, j);
                found = 1;
            }
        }
    }
    if (!found) {
        printf("\nValue %d not found in the array.\n", val);
    }
}

void sortArray(int arr[][MAX_COLS], int rows, int cols) {
    printf("\n--- Sorting Array (Row by Row) ---\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols - 1; j++) {
            for (int k = j + 1; k < cols; k++) {
                if (arr[i][j] > arr[i][k]) {
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }
    printf("Array sorted successfully (each row independently).\n");
}

void updateElement(int arr[][MAX_COLS], int rows, int cols) {
    int r, c, newVal;
    printf("Enter row index to update (0 to %d): ", rows -1);
    scanf("%d", &r);
    printf("Enter column index to update (0 to %d): ", cols -1);
    scanf("%d", &c);
    if (r < 0 || r >= rows || c < 0 || c >= cols) {
        printf("\nError: Invalid row or column index.\n");
        return;
    }
    printf("Enter new value: ");
    scanf("%d", &newVal);
    arr[r][c] = newVal;
    printf("\nElement at (%d, %d) updated to %d.\n", r, c, newVal);
}

int main() {
    int arr[MAX_ROWS][MAX_COLS];
    int rows, cols;
    int choice;

    printf("Enter number of rows (max %d): ", MAX_ROWS);
    scanf("%d", &rows);
    printf("Enter number of columns (max %d): ", MAX_COLS);
    scanf("%d", &cols);

    if (rows <= 0 || rows > MAX_ROWS || cols <= 0 || cols > MAX_COLS) {
        printf("Invalid dimensions. Exiting.\n");
        return 1;
    }

    printf("Enter array elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    do {
        printf("\n--- 2D Array Operations Menu ---\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element (Set to 0)\n");
        printf("4. Search Element\n");
        printf("5. Sort Array (Row-wise)\n");
        printf("6. Update Element\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayArray(arr, rows, cols);
                break;
            case 2:
                insertElement(arr, &rows, &cols);
                break;
            case 3:
                deleteElement(arr, rows, cols);
                break;
            case 4:
                searchElement(arr, rows, cols);
                break;
            case 5:
                sortArray(arr, rows, cols);
                break;
            case 6:
                updateElement(arr, rows, cols);
                break;
            case 0:
                printf("\nExiting program. Goodbye! 👋\n");
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}