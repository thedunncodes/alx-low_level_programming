#include "lists.h"
#include <string.h>


/**
 * add_node - A function that adds a node to the head of linked list
 * @head: pointer to a pointer that points to the start of a liked list
 * @str: pointer to a string to be added in a node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
