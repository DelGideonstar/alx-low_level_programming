#include "main.h"

/**
 * _isupper - checks if a  character is uppercase or not
 * @c: character to be tested
 * Return: 1 whether it is, 0 otherwise
 */
int _isupper(int c)
{
	int result = c > 64 && c < 91;

	return (result);
}
