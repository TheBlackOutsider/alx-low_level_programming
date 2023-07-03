#include <stdio.h>

/**
 * main - main entry for the programm
 * Return: 1
 */
int main(void)
{
char* message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fwrite(message, sizeof(char), strlen(message), stderr);
return (1);
}

