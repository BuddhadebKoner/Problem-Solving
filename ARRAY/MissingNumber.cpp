// missing number problem 
// Link - https://leetcode.com/problems/missing-number/

#include<stdio.h>
// this function time complexcity is O(n^2)
// int missingNumber(int* nums, int n) {
//     for (int i = 0; i <= n; i++) {
//         int found = 0;
//         for (int j = 0; j < n; j++) {
//             if (nums[j] == i) {
//                 found = 1; // Mark as found if the number is present
//                 break;
//             }
//         }
//         if(!found){
//             return i;
//         }
//     }
//     return -1;
// }
// this is O(1) of time complexcity

int missingNumber(int* nums, int numsSize) {
    int sum = 0;
    int expectedSum = numsSize * (numsSize + 1) / 2;
    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
    }
    return expectedSum - sum;
}


int main(){
    int nums[100];
    int n;
    printf("Enter the Length Of array :\n");
    scanf("%d", &n);

    printf("Enter %d number , that will be stored in the array\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int result = missingNumber(nums, n);
    if (result==0)
    {
        printf("dont have missing number");
    }else{
        printf("the missing number is %d",result);
    }
    return 0;
}
