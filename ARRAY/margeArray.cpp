// https://leetcode.com/problems/merge-sorted-array/submissions/1191068560/

//  Merge Sorted Array

//  You are given two integer arrays nums1 and nums2,
//  sorted in non-decreasing order, and two integers m and n,
//  representing the number of elements in nums1 and nums2 respectively.
//  Merge nums1 and nums2 into a single array sorted in non-decreasing order.
//  The final sorted array should not be returned by the function,
//  but instead be stored inside the array nums1. To accommodate this,
//  nums1 has a length of m + n, where the first m elements denote the elements that should be merged,
//  and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

#include <stdio.h>
#define Max 100

void MergeSortedArray(int *arr1, int n1, int *arr2, int n2)
{
    int i = n1 - 1, j = n2 - 1, k = (n1 + n2) - 1;

    while (i >= 0 && j >= 0)
    {
        if (arr1[i] > arr2[j])
        {
            arr1[k--] = arr1[i--];
        }
        else
        {
            arr1[k--] = arr2[j--];
        }
    }
    while (j >= 0)
    {
        arr1[k--] = arr2[j--];
    }
}

int main()
{
    int arr1[Max], arr2[Max], n1, n2;

    // note the user must enter sorted array & non-decreasing . 
    printf("Enter the size of first array :\n");
    scanf("%d", &n1);
    printf("Enter %d element in the first array :\n", n1);
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of second array :\n");
    scanf("%d", &n2);
    printf("Enter %d element in the second array :\n", n2);
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    MergeSortedArray(arr1, n1, arr2, n2);

    printf("The Merged array is: [");
    for (int i = 0; i < n1 + n2; i++)
    {
        printf("%d", arr1[i]);
        if (i < n1 + n2 - 1)
        {
            printf(", ");
        }
    }
    printf("]");

    return 0;
}
