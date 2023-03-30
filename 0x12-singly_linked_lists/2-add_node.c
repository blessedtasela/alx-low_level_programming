#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the begining of a list
 * @head: the origial linked list
 * @str: the string to add to the node
 * Return: address of the new list else NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int len = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	return (NULL);

	while (str[len])
	len++;

	temp->len = len;
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;

	return (temp);
}
