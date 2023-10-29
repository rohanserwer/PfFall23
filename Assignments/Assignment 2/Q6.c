#include <stdio.h>

void findPairs(int arr[], int size, int target) {
    printf("Pairs: ");
    int found = 0;
    int i,j;
    for ( i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == target) {
                printf("(%d, %d) ", arr[i], arr[j]);
                found = 1;
            }
        }
    }
    
    if (!found) {
        printf("No pairs found.");
    }
    
    printf("\n");
}

int main() {
    int arr[100]; // Assuming a maximum of 100 elements in the list
    int size, target;
    int i;
    
    printf("Enter the number of elements in the list: ");
    scanf("%d", &size);
    
    printf("Enter the elements of the list:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the target sum: ");
    scanf("%d", &target);
    
    findPairs(arr, size, target);
    
    return 0;
}

