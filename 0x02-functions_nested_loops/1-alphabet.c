#include "main.h"

/**
 * print_alphabet -  prints all alphabet in lowercase
 *
 * Return: 0 on success
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i  <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}


