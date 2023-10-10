#include "search_algos.h"

/**
 * binary_search -  a function that searches for a value in a sorted array of integers using the Binary search algorithm.
 * @array:
 * @size:
 * @value:
 * Return:
 **/


int binary_search(int *array, size_t size, int value) {
    if (array == NULL)
        return -1;

    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        printf("Searching in array: ");
        for (size_t i = left; i <= (size_t)right; i++) {
            if (i < size - 1)
                printf("%d, ", array[i]);
            else
                printf("%d\n", array[i]);
        }

        if (array[mid] == value)
            return mid;

        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}
