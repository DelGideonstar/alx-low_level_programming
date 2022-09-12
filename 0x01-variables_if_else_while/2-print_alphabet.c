#include <stdio.h>

/**
 * main - start point of the function
 *
 * Return: 0
 */
int main(void)
{
	int letter = 0;

	while (letter < 26)
	{
		putchar('a' + letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
