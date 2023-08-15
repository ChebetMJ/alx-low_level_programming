#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
	int numb, multi, answ;

	if (n >= 0 && n <= 15)
	{
		for (numb = 0; numb <= n; numb++)
		{
			_putchar('0');

			for (multi = 1; multi <= n; multi++)
			{
				_putchar(',');
				_putchar(' ');

				answ = numb * multi;

				if (answ <= 99)
					_putchar(' ');
				if (answ <= 9)
					_putchar(' ');

				if (answ >= 100)
				{
					_putchar((answ / 100) + '0');
					_putchar(((answ / 10)) % 10 + '0');
				}
				else if (answ <= 99 && answ >= 10)
				{
					_putchar((answ / 10) + '0');
				}
				_putchar((answ % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
