#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet ten times
 *
 * Return: 0 0n success
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
				c++;
		}
	_putchar('\n');
	i++;
	}
}
