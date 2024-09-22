#include <stdio.h>

/*Time Complexity
Best Case:O(1)
Average Case: O(longn)
Worst case: O(logn)
 */
//?Space complexity : O(1)

/*
Working of the ternary Search.Ternary search is based on the divide and conquer strategy.It works as follows
1.Divide the datset into three parts
2.Compare the target element with the elements at the two dividion points
3.Depending on the comparisions,you can eliminate one third of the dataset
4.Repeat the process until you find the target element or exhaust the search space.

APPLICATION AND BENEFITS
-Efficiency : Ternary search reduces the search space by one-third in each iteration,making it faster than linear search.In some cases,It is faster than binary search,
espacially when the target elementis closer to the beginning of the fataset.
-Simplicity : The algorithm is easy to understand and implement,making it accessible to programmers of all levels.
-Guaranteed Success : Ternary search guarantees success of the target element is present in the dataset.It continues until the search space is empty
*/

int ternarySearch(int arr[], int left, int right, int target);

void main()
{
    int arr[] = {1, 3, 5, 7, 8, 11, 13, 15, 18, 20, 24};

    int target;
    printf("Enter the target element which you want to finds index of in an array : ");
    scanf("%d", &target);

    // measuring the size of given array
    int n = sizeof(arr);

    // function call
    int result = ternarySearch(arr, 0, n - 1, target);

    if (result != -1)
    {
        printf("Element %d found at index %d\n", target, result);
    }
    else
    {
        printf("Element %d not found in the array\n", target);
    }
}

int ternarySearch(int arr[], int left, int right, int target)
{
    // Check if the left boundary is less than or equal to right boundary
    if (left <= right)
    {
        // Calculate two midpoints dividing the current subarray into three equal parts
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        // check id the target is equal to either of the midpoints
        if (arr[mid1] == target)
        {
            return mid1;
        }
        if (arr[mid2] == target)
        {
            return mid2;
        }

        // if target is less than the element at mid1 search in the left third of the subarray
        if (target < arr[mid1])
        {
            return ternarySearch(arr, left, mid1 - 1, target);
        } // if the target is greater than the element at mid2, search in the right third of the subarray
        else if (target > arr[mid2])
        {
            return ternarySearch(arr, mid2 + 1, right, target);
        }
        else
        { // if the target is in between mid1 and mid2, search in the middle third of the subarray
            return ternarySearch(arr, mid1 + 1, mid2 - 1, target);
        }
    }
    // if element not found,then return -1
    return -1;
}