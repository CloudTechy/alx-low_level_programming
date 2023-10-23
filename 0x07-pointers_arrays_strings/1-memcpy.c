#include "main.h"

/**
 * _memcpy - entry function
 * @dest: string para
 * @src: string para
 * @n: integer
 * Description: "copies memory area"
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		*(dest + i) = *(src + i);
	return (dest);
}
