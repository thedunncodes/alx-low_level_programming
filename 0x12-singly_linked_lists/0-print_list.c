#include <stdio.h>
#include "lists.h"

/**
 * print_list - A function that prints a linked list
 * @h: pointer t  head of list
 * Return: number of nodes in list as size_t
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %s\n", 0, "(nil)");

		h = h->next;
		count++;
	}

	return (count);
}
