#include "main.h"

/**
 * _memset - entry function
 * @s: a string
 * @b: a character byte
 * @n: an unsigned integer
 * Description: "fill memory with a constant byte"
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; i < n; i++)
		*(s + i) = b;
	return (s);

}

