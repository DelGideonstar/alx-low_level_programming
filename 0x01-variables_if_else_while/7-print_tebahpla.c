#include <stdio.h>

/**
 * main - start of the function
 *
 * Return: 0
 */
int main(void)
{
	int letter = 0;

	while (letter < 26)
	{
		putchar('z' - letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
