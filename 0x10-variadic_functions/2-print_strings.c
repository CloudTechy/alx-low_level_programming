#include "variadic_functions.h"

/**
 * print_strings -  prints string, followed by a new line.
 * @separator: string
 * @n: int args count
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *s;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char*);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator && i < n - 1)
			printf("%s", separator);
		va_end(list);
	}
	printf("\n");

}
