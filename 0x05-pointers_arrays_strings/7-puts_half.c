#include "mainh"
/**
 * puts_half - prints half of a string
 * @str: parameter
 *
 */

void puts_half(char *str)
{
	int i, n;

	n = _strlen(str);
	if (n % 2 == 0)
	{
		for (i = 1; i <= n / 2; i++)
			str++;
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
		_putchar('\n');
	}
	else 
	{
		for (i = 1; i <= (n + 1) / 2; i++)
			str++;
		while (*str != '\0')
		{
			_putchar(*str);
			str++;
		}
		_putchar('\n');
	}
}
