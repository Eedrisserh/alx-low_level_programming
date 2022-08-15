#include "lists.h"

/**
 * add_nodeint - To adds a new node at the beginning
 *		 of a listint_t list.
 * @head: Indicate a pointer to the address of the
 *		head of the listint_t list.
 * @n: Indicate the integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *		Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw;

	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
		return (NULL);

	nw->n = n;
	nw->next = *head;

	*head = nw;

	return (nw);
}
