#include "main.h"
/**
 * rot13 - chages a string to rot13
 * @s: the string
 *
 * Return: the changed string
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if ((*(s + i) >= 'a' && *(s + i) < 'n') ||
		(*(s + i) >= 'A' && *(s + i) < 'N'))
			*(s + i) += 13;
		else if ((*(s + i) >= 'n' && *(s + i) <= 'z') ||
		(*(s + i) >= 'N' && *(s + i) <= 'Z'))
			(*(s + i) -= 13);
	}
	return (s);
}
