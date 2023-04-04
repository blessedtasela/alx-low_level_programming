#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - prints the number of elements in a list
 * @h: a linked list pointer to head
 * Return: the number of elements in list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
	count++;
	h = h->next;
	}
	return (count);
}
