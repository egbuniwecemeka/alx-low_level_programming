#include "search_algos.h"

/**
 * binary_search - search for val in a sorted array using binary search algorithm
 * @array: pointer to first element of array to search
 * @size: length of array
 * @value: value to search for
 *
 * Return: the index of searched element, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
    size_t low = 0, high = size - 1, mid, i;

    if (array == NULL)
        return (-1);

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        printf("Searching for array: ");
        for (i = low; i <= high; ++i)
            printf("%d%s", array[i], (i < high) ? ", " : "\n");

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}
