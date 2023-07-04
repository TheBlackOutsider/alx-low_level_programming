#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */
int _atoi(char *s)
{
	int i;
	int rpoint = 0;
	int std = -1;
	int brk = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			std = std * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			rpoint = rpoint * 10;
			rpoint -= (s[i] - '0');
			brk = 1;
		}
		else if (brk == 1)
			break;
	}
	rpoint = std * rpoint;
	return (rpoint);
}

