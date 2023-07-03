#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check the parameter is alphabetic char
 * @c: character to test
 * Return: 1 (True) ||  0 (False)
 */
int _isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

