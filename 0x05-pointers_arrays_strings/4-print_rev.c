#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string to reverse
 *
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	s--;
	while (i > 0 || *s != '\0')
	{
		_putchar (*s);
		s--;
		i--;
	}
	_putchar ('\n');
}
