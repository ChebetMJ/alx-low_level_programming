#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @i: number of times the character \ should be printed
 */

void print_diagonal(int i)
{
	if (i <= 0)
	{
		_putchar('\n');
	} else
	{
		int n, m;

		for (n = 0; n < i; n++)
		{
			for (m = 0; m < i; m++)
			{
				if (m == n)
					_putchar('\\');
				else if (m < n)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
