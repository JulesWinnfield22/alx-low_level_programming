#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees memory
 * @head: the list
 *
 * Return: no return value
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
