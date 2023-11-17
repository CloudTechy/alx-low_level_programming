#include "lists.h"
#include <string.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int count  = 0;
	list_t *current = h;

	while (current != NULL)
	{
		count++;
		if (current->str == NULL)
			printf("[0] (nil)")
		current = current->next;
	}
	return (count);
}
