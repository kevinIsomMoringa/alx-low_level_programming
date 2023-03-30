#include "main.h"

/**
 * _puts - Displays a string to stdout
 * @str: string pointer to print
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
