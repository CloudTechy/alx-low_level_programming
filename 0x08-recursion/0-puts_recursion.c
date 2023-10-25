#include "main.h"

/**
 * _puts_recursion - entry function
 * @s: string parameter
 * Description: "prints a string, followed by a new line"
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
