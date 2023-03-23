#include "main.h"

/**
 * print_alphabet - Entry point
 * Return:0
 */

void print_alphabet(void)
{
	char c = 'a';

	while (lowerAlphabet <= 'z')
	{
		_putchar(lowerAlphabet);
		lowerAlphabet++;

	}
	_putchar('\n');

}
