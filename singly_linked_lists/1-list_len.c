#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer to first node
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	if (h->str)
		printf("-> %d elements\n", h->len);
}
