#include <stdio.h>

/**
  * main - To print the first 50 fibonacci numbers.
  * Return: 0
  */
int main(void)
{
	unsigned long nbr, i, j, k;

	i = 0;
	j = 1;
	for (nbr = 0; nbr < 50; nbr++)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%lu", k);
		if (nbr == 49)
			putchar('\n');
		else
		{
			printf(", ");
		}
	}
	return (0);
}

