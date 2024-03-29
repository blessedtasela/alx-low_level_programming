#include "lists.h"
#include <stdlib.h>

/**
 * list_len - prints the number of elements in a list
 * @h: a linked list
 * Return: the number of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
	h = h->next;
	count++;
	}
	return (count);
}
