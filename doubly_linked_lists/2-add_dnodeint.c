#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of
 * a doubly linked list.
 * @head: pointer to head node
 * @n: integer
 *
 * Return: EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));

	if (!newNode)
		return (NULL);
	if (!head)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;

	if (*head)
	{
		newNode->next = *head;
		(*head)->prev = newNode;
	}
	*head = newNode;
	return (newNode);
}
