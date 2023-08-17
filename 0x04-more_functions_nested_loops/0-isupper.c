#include "main.h"

/**
 * _isupper - uppercase letters
 * @n: char to check
 *
 * Return: 0 or 1
 */

int _isupper(int n)
{
	if (n >= 'A' && n <= 'Z')
		return (1);
	else
		return (0);
}
