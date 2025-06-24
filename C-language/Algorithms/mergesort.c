#include <stdio.h>

/*Time Complexity
Best Case:O(nlogn)
Average Case:O(nlogn)
Worst case:O(nlogn)
 */
//?Space complexity :O(n)

/*
Working of the Merge Sort
->It is an efficient,stable,comparison-based Divide and conquer sorting algorithm,and its recursive.It divides the input array into two halves,
calls itself for the two halves,sorting them,and then merges the two sorted halves

APPLICATION AND BENEFITS
Efficiency: Merge sort has a time complexity of O(n log n) in the worst-case scenario, making it efficient for sorting large data sets.
It performs consistently well regardless of the initial order of the elements, making it suitable for a wide range of applications.

Stability: Merge sort is a stable sorting algorithm, meaning that it preserves the relative order of equal elements in the input array.
This property is important in certain applications where maintaining the original order of equal elements is necessary.

External Sorting: Merge sort is well-suited for external sorting, where data sets are too large to fit into main memory and must be sorted using external storage
such as hard drives or SSDs Its efficient use of sequential access patterns minimizes the number of disk accesses, reducing I/O overhead.

Parallelization: Merge sort can be easily parallelized by dividing the input array into smaller subarrays and sorting them concurrently.
This makes it suitable for parallel computing environments, where multiple processors or cores can be utilized to speed up the sorting process.

Linked Lists: Merge sort is particularly efficient for sorting linked lists,
as it does not require random access to elements and can easily merge two sorted linked lists in O(1) space and O(n) time.
 This makes it a popular choice for sorting linked data structures in programming languages like Python
*/

void merge(int arr[], int l, int mid, int r);
void mergeSort(int arr[], int l, int r);

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    mergeSort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2]; // temporary arrays

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + i + 1];
    }

    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}
