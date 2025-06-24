#include <stdio.h>

/*Time Complexity
Best Case:O(1)
Average Case:O(logn)
Worst case:O(logn)
 */
//?Space complexity :O(1)
/*
Working of the binary search
->It works by repeadly dividing in half the portion of the list that could contain the item,until you've narrowed down the possible locations to just one.
1.Finding the middle index “mid” in Binary Search Algorithm
2.Compare the middle element of the search space with the key.
3.If the key is found at middle element, the process is terminated.
4.If the key is not found at middle element, choose which half will be used as the next search space.
5.If the key is smaller than the middle element, then the left side is used for next search.
6.If the key is larger than the middle element, then the right side is used for next search.
7.This process is continued until the key is found or the total search space is exhausted

APPLICATION AND BENEFITS
-It is faster than linear search, especially for large arrays.More efficient than other searching algorithms with a similar time complexity,
such as interpolation search or exponential search.
*/

int binarySearch(int arr[], int target, int left, int right);

void main()
{
    int arr[] = {1, 3, 5, 7, 8, 11, 13, 15, 18, 20, 24, 27, 29, 35};

    int target;
    printf("Enter the target element which you want to finds index of in an array : ");
    scanf("%d", &target);

    // measuring the size of given array
    int n = sizeof(arr) / sizeof(arr[0]);

    int left = 0;

    int right = n - 1;

    // function call
    int result = binarySearch(arr, target, left, right);

    if (result != -1)
    {
        printf("Element %d found at index %d.", target, result);
    }
    else
    {
        printf("Element %d not found in the array", target);
    }
}

int binarySearch(int arr[], int target, int left, int right)
{
    while (left <= right)
    {
        // int middle = left + (right - left) / 2;
        int middle = left + (right - left) / 2;

        // Check if target is present at middle
        if (arr[middle] == target)
            return middle;

        // If target greater, ignore left half
        if (arr[middle] < target)
        {
            left = middle + 1;
        }
        else
        {
            right = middle - 1;
        }
    }

    // If we reach here, then element was not present
    return -1;
}