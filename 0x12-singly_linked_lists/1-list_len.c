#include "lists.h"

/**
 * list_len - A function that gets the number of nodes of in alinked list
 * @h: head of linked list
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int count;

	count = 0;
	temp = h;

	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
