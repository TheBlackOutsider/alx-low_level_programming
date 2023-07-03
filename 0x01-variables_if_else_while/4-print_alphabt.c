#include <stdio.h>

/**
 * main - To print the alphabet in lowercase except q and e.
 * Return: 0
 */
int main(void)
{
	char e = 'a';

	while (e <= 'z')
	{
		if (e != 'q' && e != 'e')
		{
			putchar(e);
		}
		e++;
	}
	putchar('\n');
	return (0);
}

