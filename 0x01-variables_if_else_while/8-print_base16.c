#include <stdio.h>

/**
 * main - a program that prints all the numbers of base sixteen in lowercase
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
