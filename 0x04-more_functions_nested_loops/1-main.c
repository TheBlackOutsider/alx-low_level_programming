#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '7';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'z';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
