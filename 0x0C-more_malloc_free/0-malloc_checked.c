#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - entry functiom
 * @b: size
 6* Return: A pointer on success,98 on fail
 */
void *malloc_checked(unsigned int b)
{
	char a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
