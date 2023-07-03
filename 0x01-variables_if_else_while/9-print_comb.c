#include <stdio.h>
#include <ctype.h>

/**
 * main - To print all single digits with , and space followed by new line
 * Return: 0
*/
int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
		if (d == '9')
			continue;

		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

