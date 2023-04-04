/*
 * File: 2-add_nodeint.c
 * Auth: Brennan D Baraban
 */

#include "lists.h"

/**
 >file; 2-add_nodeint.c - Adds a new node at the beginning
 >              of a listint_t list.
 >head: A pointer to the address of the
 >        head of the listint_t list.
 >n: The integer for the new node to contain.

 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
