#include "main.h"
/**
 * rev_string - reverses a string
 * @s: parameter
 *
 */

void rev_string(char *s)
{
	int i, len = 0;
	char temp, *start, *end;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	start = s;
	end = s;
	for (i = 0; i < len; i++)
		end++;
	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;
		start++;
		end--;
	}
}
