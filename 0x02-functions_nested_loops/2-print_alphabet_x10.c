#include "main.h"
/**
 * print_alphabet_x10 - print alphabet x10
 *
 * Return: void
 */

void print_alphabet_x10(void)

{
	int i = 0;
	char n;

	while (i++ <= 9)
	{
		for (n = 'a'; n <= 'z'; n++)
			_putchar(n);
		_putchar('\n');
	}
}
