#include <stdio.h>

/**
 * main - start point of the function
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
	putchar('\n');
	return (0);
}
