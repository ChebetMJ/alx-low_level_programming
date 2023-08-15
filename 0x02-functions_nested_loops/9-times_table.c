#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int numb, multi, answ;

	for (numb = 0; numb <= 9; numb++)
	{
		_putchar('0');

		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');

			answ = numb * multi;

			if (answ <= 9)
				_putchar(' ');
			else
				_putchar((answ / 10) + '0');

			_putchar((answ % 10) + '0');
		}
		_putchar('\n');
	}
}
