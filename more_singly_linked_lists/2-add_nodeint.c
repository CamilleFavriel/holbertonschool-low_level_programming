#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: pointer to pointer to head node
 * @n: numbers
 *
 * Return: address of the new element, or NULL if fail.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	if (!head)
		return (NULL);

	newNode->next = *head;
	newNode->n = n;
	*head = newNode;

	return (newNode);
}
