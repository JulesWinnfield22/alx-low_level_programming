#include <stdio.h>
#include "main.h"

/**
* main - entry point
*
* Return: 0
*/

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 5 == 0 && a % 3 == 0)
			printf("FizzBuzz");
		else if (a % 5 == 0)
			printf("Buzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else
			printf("%d", a);

		if (a < 100)
			printf(" ");
	}

	return (0);
}
