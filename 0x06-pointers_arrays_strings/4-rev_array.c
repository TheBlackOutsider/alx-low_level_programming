#include "main.h"

/**
 * reverse_array -to reverse the content of an array of int
 * @a: content
 * @n: numbers of elements of content
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n; i++)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}

