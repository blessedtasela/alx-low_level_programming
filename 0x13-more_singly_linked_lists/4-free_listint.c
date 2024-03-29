#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a linked list
 * @head: head of the list pointer
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head)
	{
	current_node = head->next;
	free(head);
	head = current_node;
	}
}

