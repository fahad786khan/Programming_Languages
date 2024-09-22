#include <stdio.h>

/*A searching algorithm is a method or process used to find or retrieve an element from a data structure.The goal is to find whether an item exists in the data set,
and oftentimes to detemine its location
*/

/*Time Complexity
Best Case: O(1)
Average Case:O(n+1/2)
Worst case:O(n)
*/
//?Space complexity :O(1)

/*
Working of the linear search is also known as sequential search
->Each element is cheaked in sequence until you find what you're looking for or the list ends.if the current element equals what we're looking for(x),return it.
1.Check each element in the list by comparing it to the key.
2.If any element is equal to the key, return its index.
3.If we reach the end of the list without finding the element equal to the key, return some value to represent that the element is not found.

APPLICATION AND BENEFITS
Linear search is a simple and easy-to-understand algorithm, but it is not efficient for large datasets. For larger datasets,
more efficient searching algorithms like binary search or hashing can be used.However, linear search can still be useful for small datasets or when the dataset is not sorted
*/

int linearSearch(int arr[], int target, int n);

void main()
{
    int arr[] = {1, 3, 5, 7, 8, 11, 13, 15, 18, 20, 24, 29, 35};

    int target;
    printf("Enter the target element which you want to finds index of in an array : ");
    scanf("%d", &target);

    // measuring the size of given array
    int n = sizeof(arr) / sizeof(arr[0]);

    // function call
    int result = linearSearch(arr, target, n);

    if (result != -1)
    {
        printf("Element %d found at index %d.", target, result);
    }
    else
    {
        printf("Element %d not found in the array", target);
    }
}

int linearSearch(int arr[], int target, int n)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == target)
        {
            return i;
        }
    return -1;
}