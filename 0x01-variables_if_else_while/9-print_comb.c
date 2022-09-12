#include <stdio.h>

/**
 * main - start the function here
 *
 * Return: 0
 */
int main(void)
{
	int current = 48;

	while (current < 58)
	{
		putchar(current++);
		if (current < 58)
		{
			putchar(44);
			putchar(32);
		}

	}
	putchar('\n');
	return (0);
}
