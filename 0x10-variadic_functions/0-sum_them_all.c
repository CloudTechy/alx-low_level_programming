#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters.
 * @n: int
 * @...: variadic parameters
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list item;
	int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(item, n);
	for (i = 0; i < n; i++)
		sum += va_arg(item, int);
	va_end(item);
	return (sum);
}
