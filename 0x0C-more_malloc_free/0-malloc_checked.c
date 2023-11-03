#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - entry functiom
 * @b: size
 6* Return: A pointer on success,98 on fail
 */
void *malloc_checked(unsigned int b)
{
	int *arr = malloc(b);

	return (arr);
}
