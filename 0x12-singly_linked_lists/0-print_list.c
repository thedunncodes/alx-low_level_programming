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
	const list_t *current = (list_t *)h;

	while (current != NULL)
	{
		if (current->str)
			printf("[%d] %s\n", current->len, current->str);
		else
			printf("[%d] %s\n", 0, "(nil)");

		current = current->next;
		count++;
	}

	return (count);
}
