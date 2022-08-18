#include "main.h"
#include <stdio.h>
/**
 * printBinary - changes an int to decimal
 * @num: the int
 *
 * Return: no return value
 */
void printBinary(unsigned long int num)
{
	int x, a;

	if (num != 1)
	{
		x = num >> 1;
		printBinary(x);
	}

	if (num == 1)
	{
		_putchar(num + '0');
	} else
	{
		a = num - (2 * x);
		_putchar(a + '0');
	}
}
/**
 * print_binary - changes an int to decimal
 * @n: the int
 *
 * Return: no return value
 */
void print_binary(unsigned long int n)
{
	if (n == 1 || n == 0)
		_putchar(n + '0');
	else
		printBinary(n);
}
