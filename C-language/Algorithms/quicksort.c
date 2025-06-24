#include <stdio.h>

/*Time Complexity
Best Case:O(nlogn)
Average Case:O(nlogn)
Worst case:O(n^2)
 */
//?Space complexity :O(logn)

/*Working of Quick sort
->The key process in quickSort is a partition(). The target of partitions is to place the pivot (any element can be chosen to be a pivot) at its
correct position in the sorted array and put all smaller elements to the left of the pivot, and all greater elements to the right of the pivot

APPLICATION AND BENEFITS
General-Purpose Sorting: Quick sort is widely used in various programming applications and libraries for sorting large datasets efficiently due to its average-case time complexity of O(n log n),
 making it suitable for general-purpose sorting tasks.

High Performance: Quick sort typically outperforms other sorting algorithms, especially for large datasets,
due to its efficient partitioning and sorting strategy. Its divide-and-conquer approach reduces the number of comparisons and swaps required,
leading to faster sorting times in practice.

In-Place Sorting: Quick sort can be implemented to sort elements in-place, meaning it does not require additional memory proportional to the size of the input array.
This makes it memory-efficient and suitable for sorting large arrays without consuming excessive memory resources.

Parallelization: Quick sort can be parallelized effectively by dividing the array into smaller sub-arrays and sorting them concurrently using multiple processors or threads. This parallelization capability allows for further performance improvements, making it suitable for parallel computing environments.

Sorting in Libraries and Frameworks: Quick sort is commonly implemented in standard libraries and frameworks for various programming languages,
such as C++, Java, and Python, due to its efficiency and versatility. Developers often rely on quick sort implementations provided by these libraries for sorting tasks in their applications.
*/
// Function to swap two elements in an array
void swap(int arr[], int i, int j);

// Function to partition the array and return the index of the pivot element
int partition(int arr[], int l, int r);

// Function to perform quick sort on the array
void quickSort(int arr[], int l, int r);

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};

    // Sort the array using quick sort
    quickSort(arr, 0, 4);

    // Print the sorted array
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// Function to partition the array and return the index of the pivot element
int partition(int arr[], int l, int r)
{
    int pivot = arr[r]; // Select the pivot element
    int i = l - 1;      // Index of the smaller element

    // Iterate through the array
    for (int j = l; j < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j); // Swap arr[i] and arr[j]
        }
    }
    swap(arr, i + 1, r); // Swap arr[i+1] and arr[r] (pivot)
    return i + 1;        // Return the partition index
}

// Function to swap two elements in an array
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

// Function to perform quick sort on the array
void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r); // Partition the array
        quickSort(arr, l, pi - 1);     // Recursively sort the left sub-array
        quickSort(arr, pi + 1, r);     // Recursively sort the right sub-array
    }
}
