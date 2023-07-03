#include <stdio.h>

/**
 * main - To print all combinations of two digits with,
 * and space followed by new line
 *
 * Return: 0
 */
int main(void)
{
	int d1, d2;

	for (d1 = 0; d1 < 9; d1++)
	{
		for (d2 = d1 + 1; d2 < 10; d2++)
		{

			putchar((d1 % 10) + '0');
			putchar((d2 % 10) + '0');

			if (d1 == 8 && d2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

