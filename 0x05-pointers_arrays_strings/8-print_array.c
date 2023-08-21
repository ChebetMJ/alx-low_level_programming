#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @m: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *m, int n)
{
	int y;

	for (y = 0; y < (n - 1); y++)
	{
		printf("%d, ", m[y]);
	}
		if (y == (n - 1))
		{
			printf("%d", m[n - 1]);
		}
			printf("\n");
}
