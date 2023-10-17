#include <stdio.h>

/**
 * swap_int - main function
 * @a : pointer to int
 * @b : pointer of int type
 * Description: "swaps the values of two integers."
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
int aux = *a;

*a = *b;
*b = aux;
}
