#include <stdio.h>

/**
  * main - To sum a even valued terms when fibonacci
  * sequence not exceed 4 million.
  * Return: 0
  */
int main(void)
{
	unsigned long count, i, j, k, total;

	i = total = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		k = i + j;
		i = j;
		j = k;
		if (k % 2 == 0 && k < 4000000)
		{
			total += k;
		}
	}
	printf("%lu\n", total);
	return (0);
}

