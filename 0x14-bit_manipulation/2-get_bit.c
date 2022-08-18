#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_list - changes an int to decimal
 * @num: the int
 * @head: the list
 *
 * Return: no return value
 */
int binary_list(unsigned long int num, bit_s **head)
{
	int x, a;
	bit_s *new;

	if (num >> 0 && num != 1)
	{
		x = num >> 1;
		binary_list(x, head);
	}

	if (num == 1)
	{
		new = malloc(sizeof(bit_s));
		if (!new)
			return (-1);
		new->b = num;
		new->next = *head;
		*head = new;
	} else
	{
		a = num - (2 * x);
		new = malloc(sizeof(bit_s));
		if (!new)
			return (-1);
		new->b = a;
		new->next = *head;
		*head = new;
	}

	return (0);
}
/**
 * get_bit - gets the bit at a given index
 * @n: the int
 * @index: the index
 *
 * Return: 0 or 1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	bit_s *head;
	unsigned int idx;
	int res;

	if (n == 1 || n == 0)
		return (n);

	head = NULL;
	res = binary_list(n, &head);

	if (res == -1)
		return (-1);

	idx = 0;
	while (idx <= index && head)
	{
		if (idx == index)
			return (head->b);
		idx++;
		head = head->next;
	}

	return (0);
}
