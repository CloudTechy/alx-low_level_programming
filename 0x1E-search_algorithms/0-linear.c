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
size_t i;

/*Check if the array is NULL */
if (array == NULL)
{
return (-1); /* Return -1 if array is NULL */
}

for (i = 0; i < size; i++)
{
printf("Value checked array[0] = [%d]\n", array[i]);
if (array[i] == value)
return (array[i]);
}

return (-1); /* Return -1 if value is not found */
}
