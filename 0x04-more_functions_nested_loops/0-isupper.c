#include "main.h"

/**
  * _isupper - Check if a letter is upper
  * @x: letter  to be checked
  *
  * Return: 1 in case of found  or 0 for any else
  */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	return (0);
}

