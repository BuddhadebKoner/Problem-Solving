// question : Count the triplets

// Given an array Arr consisting of N(array length) distinct integers.
// The task is to count all the triplets such that sum of two elements equals the third element.

// LInk of gfg - https://www.geeksforgeeks.org/problems/count-the-triplets4615/1

#include <stdio.h>

int tripletsCount(int Arr[], int n)
{
    printf("Your Entered : { ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", Arr[i]);
    }
    printf("}\n");

    int count = 0;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {
                if ((Arr[i] + Arr[j] == Arr[k]) || (Arr[j] + Arr[k] == Arr[i]) || (Arr[i] + Arr[k] == Arr[j]))
                {
                    count++;
                }
            }
        }
    }
    return count;
}

int main()
{
    int Arr[100];
    int n;
    printf("Enter the Length Of array :\n");
    scanf("%d", &n);

    printf("Enter %d number , that will be store in the array\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }

    int count = tripletsCount(Arr, n);
    printf("Number of triplets is : %d\n", count);

    return 0;
}