#include <stdio.h>

/**
 * main - To prints the alphabet in lowercase, and then in uppercase
 * Return: 0
 */
int main(void)
{
	char char1 = 'a';
	char char2 = 'A';

	while (char1 <= 'z')
	{
		putchar(char1);
		char1++;
	}
	while (char2 <= 'Z')
	{
		putchar(char2);
		char2++;
	}
	putchar('\n');
	return (0);

}

