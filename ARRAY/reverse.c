#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, *arr, i, temp;
    
    // Input the number of elements
    scanf("%d", &num);
    
    // Allocate memory for the array
    arr = (int *)malloc(num * sizeof(int));
    
    // Input elements for the array
    for (i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    // Reverse the array
    for (i = 0; i < num / 2; i++) {
        temp = arr[i];
        arr[i] = arr[num - i - 1];
        arr[num - i - 1] = temp;
        
    }
    
    // Print the reversed array
    printf("Reversed array: ");
    for (i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    
    // Free allocated memory
    free(arr);
    
    return 0;
}
