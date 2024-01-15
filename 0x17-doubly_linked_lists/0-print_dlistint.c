#include "lists.h"

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: a pointer to link node
 * Return: total elements in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t total = 0;
	const dlistint_t *node = h;

	if (node == NULL)
		return (total);

	while (node->prev != NULL)
		node = node->prev;


	while (node != NULL)
	{
		total++;
		node = node->next;
	}
	return (total);
}
