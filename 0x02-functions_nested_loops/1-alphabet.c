#include "main.h"

/**
 * main -  print all alphabet in lowercase
 *
 * Return: 0 on success
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
	return (0);
}


