#include <stdio.h>

/*Sorting algorithms is a method or a process used to rearrange elements in a list or an array in a certian order,whether it be ascending,descending,
or even based on some complex rules.
 */

/*Time Complexity
Best Case:O(n)
Average Case:O(n^2)
Worst case:O(n^2)
 */
//?Space complexity :O(1)

/*
Working of the Bubble sort
->It is a simple sorting algorithm that repeatedly steps through the array,element by element compairing the current element with the one after it,
swapping their values if the former is larger than the latter.

APPLICATION AND BENEFITS
Small Data Sets: Bubble sort can be useful for sorting small data sets or nearly sorted lists.
It performs relatively well when the data set is already mostly sorted or contains only a few elements because it has a time complexity of O(n^2) in the worst-case scenario.

Debugging and Testing: Bubble sort can be used as a reference implementation for testing other sorting algorithms.
Its straightforward implementation makes it a useful tool for verifying the correctness of more complex sorting algorithms.

Teaching Optimization Techniques: While bubble sort itself is not an efficient algorithm for large data sets due to its quadratic time complexity,
it can be a starting point for discussing optimization techniques. For example,
students can learn about techniques like early termination or optimization of swaps to reduce unnecessary iterations and improve performance.

Embedded Systems and Limited Resources: In environments with limited computational resources, such as embedded systems or microcontrollers,
where memory or processing power is restricted, bubble sort may be preferred due to its simplicity and low memory overhead.
It requires minimal additional space and can be implemented efficiently in resource-constrained environments.
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

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
