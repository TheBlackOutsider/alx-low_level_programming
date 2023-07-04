
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, run, n;
	int pass[100];

	run = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		run += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - run) - '0' < 78)
		{
			n = 2772 - run - '0';
			run += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
