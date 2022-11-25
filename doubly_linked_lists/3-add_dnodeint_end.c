#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of
 * a doubly linked list.
 * @head: pointer to head node
 * @n: integer
 *
 * Return: EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *lastNode;
	newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (!(*head))
	{
		newNode->prev = NULL;
		*head = newNode;
		return (*head);
	}
	else
	{
		lastNode = *head;

		while (lastNode->next)
		{
			lastNode = lastNode->next;
			lastNode->next = newNode;
			lastNode->prev = *head;
		}
	}
	return (lastNode);
}
