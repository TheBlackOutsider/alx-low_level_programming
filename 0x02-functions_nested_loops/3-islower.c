#include "main.h"
#include <ctype.h>
/**
 * _islower - check if the parameter is lower case.
 * @c: character to test.
 * Return: 1 (True) || 0 (False)
 */
int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

