#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with the 1st char
 * @str: parameter
 *
 */

void puts2(char *str)
{
	int n = 0; i;

	while (str[n] != '\0')
		n++;
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
