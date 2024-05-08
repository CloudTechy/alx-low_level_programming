#include "search_algos.h"

/**
 * linear_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: is a pointer to the first element of the array to search in
 * @size:  the number of elements in array
 * @value: the value to search for
 * Return: "value index of array found or -1 when not found"
 */
int linear_search(int *array, size_t size, int value)
{
    int i;

    if (array == NULL)
        return (-1);

    for (i = 0; i < (int)size; i++)
    {
        printf("Value checked array[%u] = [%d]\n", i, array[i]);
        if (value == array[i])
            return (i);
    }
    return (-1);
}