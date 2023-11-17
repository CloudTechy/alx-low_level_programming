#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

/**
 * struct list_i - singly linked list
 * @str: string - malloc'ed strtype
 * @len: length of the string
 * @next: points to the next node
 * Description: singly linked list structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


int _putchar(char c);
size_t print_list(const list_t *h);

#endif
