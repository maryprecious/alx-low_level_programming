#include "lists.h"
/**
 * listint_len - will count number of element in a list
 * @h: pointer head
 * Return: total number of element in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
