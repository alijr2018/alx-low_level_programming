#include"search_nlogs.h"

/**
 *a function that searches for a value in an array of integers using the Linear search algorithm
 * @array:
 * @size:
 * @value:
 * Return:
*/
int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        printf("Value checked array[%lu] = [%d]\n", 0, -1);
        return -1;
    }

    for (size_t i = 0; i < size; i++) {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return i;
    }

    return -1;
}
