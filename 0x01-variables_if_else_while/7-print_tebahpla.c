#include <stdio.h>

/**
 * main - To print the lowercase alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	char lt;

	for (lt = 'z'; lt >= 'a'; lt--)
		putchar(lt);

	putchar('\n');

	return (0);
}

