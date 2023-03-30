#include "main.h"
int _countlen(char *s);

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int j, len;

	len = _countlen(s);

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}

/**
 * _countlen - Calculates and returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _countlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
