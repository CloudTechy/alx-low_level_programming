#include "function_pointers.h"

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array
 * @size: length of array
 * @action: pointer to function
 * @array: array of pointers
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
