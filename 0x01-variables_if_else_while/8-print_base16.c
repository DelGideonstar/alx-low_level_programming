#include <stdio.h>

/**
 * main - start point of the formula
 *
 * Return: 0
 */
int main(void)
{
	int current = 48;

	while (current < 58)
	{
		putchar(current++);
	}
	current += 39;
	while (current < 103)
	{
		putchar(current++);
	}
	putchar('\n');
	return (0);
}
