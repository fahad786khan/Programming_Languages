#include <stdio.h>

/*Time Complexity
Best Case:O(n)
Average Case:O(n^2)
Worst case:O(n^2)
 */
//?Space complexity :O(1)

/*
Working of the Insertion Sort
->It is a simple sorting algorithm that builds the final sorted array or element at a time by repeatedly moving unsorted elements into their correct position.

APPLICATION AND BENEFITS
Online Algorithms: Insertion sort can be used in scenarios where data is arriving continuously or in an online fashion.
Its incremental nature allows for efficient sorting as new elements are added to the existing sorted portion of the list.

Adaptive Sorting: Insertion sort is adaptive, meaning it performs well on lists that are already partially sorted.
In such cases, it requires fewer comparisons and swaps, leading to improved performance compared to non-adaptive sorting algorithms.

Stable Sorting: Insertion sort is a stable sorting algorithm, meaning it preserves the relative order of equal elements.
This property is useful in applications where maintaining the original order of equal elements is important.

In-Place Sorting: Insertion sort can be implemented to sort elements in-place, meaning it does not require additional memory beyond the original array.
This makes it suitable for environments with limited memory resources or when memory overhead needs to be minimized.
*/
int main()
{
    int n, i, j, temp, a[100];
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;

        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }

    printf("\nArray elements after sorting: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
