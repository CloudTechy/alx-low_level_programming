#include "main.h"

/**
 * main - entry function.
 * @argc: arguments counter
 * @argv: arguments 
 * Descriptiom: "prints its name"
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	while(*argv[0])
	{
		_putchar(*argv[0]);
		argv[0]++;
	}
	_putchar('\n');
	return (0);
}
