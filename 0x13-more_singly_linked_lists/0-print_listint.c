#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: the list
 *
 * Return: the number of elemets
 */
size_t print_listint(const listint_t *h)
{
	size_t length = 0;

	while (h)
	{
		++length;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (length);
}
