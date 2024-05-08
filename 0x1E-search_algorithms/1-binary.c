#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: is a pointer to the first element of the array to search in
 * @size:  the number of elements in array
 * @value: the value to search for
 */

int binary_search(int *array, size_t size, int value)
{
    
	int search;

	search = bs_helper(array, value, -1, size);
	if (search)
		return (search);
	return (-1);
}

/**
 * bs_helper - helper function for bsearch
 * @array: array of integer values
 * @key: key to match array element
 * @lower: subarray before mid
 * @higer: subarray after mid
 *
 * Description: Recursively split array in halfs until matching elem found
 * Return: -1 if value not present or array is NULL OR index if found
 */
int bs_helper(int *array, int key, int lower, int higher)
{
	int i;
	int mid;

	if (lower + 1 == higher)
		return (-1);

	printf("Searching in array: ");
	for (i = lower + 1; i < higher; i++)
	{
		printf("%d", array[i]);
		if (i + 1 < higher)
			printf(", ");
	}
	printf("\n");

	mid = (lower + higher) / 2;
	if (array[mid] == key)
		return (mid);

	if (key < array[mid])
		return (bs_helper(array, key, lower, mid));
	else
		return (bs_helper(array, key, mid, higher));
}
