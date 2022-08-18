#include "main.h"
#include <stdio.h>
/**
 * _2PowerOf - the power of
 * @p: the power
 *
 * Return: the value
 */
unsigned int _2PowerOf(int p)
{
	unsigned int power;

	power = 1;
	while (p--)
		power *= 2;

	return (power);
}

/**
 * binary_to_uint - binary to dicimal
 * @b: the binary
 *
 * Return: the converted value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;
	int length;

	if (!b)
		return (0);

	decimal = 0, length = 0;

	while (b[length])
		++length;

	length -= 1;
	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);
		if (*b == '1')
			decimal += _2PowerOf(length);
		b++;
		length--;
	}

	return (decimal);
}
