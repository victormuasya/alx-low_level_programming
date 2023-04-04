/* file: returns the number of elements in a linked listint list
h - is a pointer to the head of the listint_list*/

#include "lists.h"
#include <stdio.h>

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
