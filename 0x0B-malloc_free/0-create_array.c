#include "main.h"
#include <stddef.h>

/**
 * create_array - entry function
 * @size: size of array
 * @c: initiating character
 * Description: "function that creates an array of chars,
 * and initializes it with a specific char"
 * Return: a pointer
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
