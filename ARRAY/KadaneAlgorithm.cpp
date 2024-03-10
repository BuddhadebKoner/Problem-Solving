// Kadane's Algorithm
#include <stdio.h>

// int maxSubArraySum(int arr[], int n) {
//     int MaxSum = arr[0];
//     int max_ending_here = arr[0];

//     for (int i = 1; i < n; i++) {
//         max_ending_here = (max_ending_here + arr[i] > arr[i]) ? max_ending_here + arr[i] : arr[i];
//         MaxSum = (max_ending_here > MaxSum) ? max_ending_here : MaxSum;
//     }

//     return MaxSum;
// }

// O(n^2) version
int maxSubArraySum(int arr[], int n) {
    int MaxSum = arr[0];

    for (int i = 0; i < n; i++) {
        int currSum = 0;
        for (int j = i; j < n; j++) {
            currSum += arr[j];
            if (currSum > MaxSum) {
                MaxSum = currSum;
            }
        }
    }

    return MaxSum;
}

// O(n^3) version
// int maxSubArraySum(int arr[], int n) {
//     int MaxSum = arr[0];

//     for (int i = 0; i < n; i++) {
//         for (int j = i; j < n; j++) {
//             int currSum = 0;
//             for (int k = i; k <= j; k++) {
//                 currSum += arr[k];
//             }
//             if (currSum > MaxSum) {
//                 MaxSum = currSum;
//             }
//         }
//     }

//     return MaxSum;
// }

int main() {
    int arr[100], n;

    printf("Enter the length of the array: ");
    scanf("%d", &n);

    printf("Enter %d numbers to store in the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered: { ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("}\n");

    int max_sum = maxSubArraySum(arr, n);
    printf("Maximum contiguous sum is: %d\n", max_sum);

    return 0;
}
