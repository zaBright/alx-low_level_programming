#include <stdio.h>

/**
 * main - a program that prints all single digit numbers of base 10 starting from 0
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
