
//File name: 0-print_listint.c
//date created 04/04/2023
//commited by victor muasya
//prototype Prints all the elements of a listint_t list.
 
 

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
//while loop - decision statement 1
	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
