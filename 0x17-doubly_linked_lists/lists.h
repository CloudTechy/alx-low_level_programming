#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#ifndef _MAIN_H
#define _MAIN_H

/**
 * struct dlistint_s - node double linked list
 * @n: integer
 * @next: next node
 * @prev: prev node
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s* next;
	struct dlistint_s* prev;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
#endif
