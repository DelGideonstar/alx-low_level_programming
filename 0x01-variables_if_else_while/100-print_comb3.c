#include <stdio.h>

/**
 * main - start of our Function
 *
 * Return: 0
 */
int main(void)
{
	int right = 48;
	int left = 48;

	while (left < 58)
	{
		while (right < 58)
		{
			putchar(left);
			putchar(right++);
			if (right == 58)
			{
				left++;
			}
			if (left < 58)
			{
				putchar(44);
				putchar(32);
			}
			right = 48;
		}
		putchar('\n');
		return (0);
}
