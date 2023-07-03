#include "main.h"

/**
 * print_times_table - print out the 9 times table
 * @n: Valuse use to generate times tables.
 *
 * Return: void
 */
void print_times_table(int n)
{
	int v, h;

	if (n > 15)
	{
		return;
	}
	for (h = 0 ; h < n + 1 ; h++)
	{
		_putchar('0');
		for (v = 1 ; v < n + 1 ; v++)
		{
			int sum = v * h;

			_putchar(',');
		}
		_putchar('\n');
	}
}

