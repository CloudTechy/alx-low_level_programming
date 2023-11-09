#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: string
 * @n: int args count
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (separator != NULL)
	{
		va_list list;
		unsigned int i;

		va_start(list, n);
		for (i = 0; i < n; i++)
			if ((n - i) != 1)
				printf("%d%s", va_arg(list, int), separator);
			else
				printf("%d", va_arg(list, int));
	}
	printf("\n");

}
