#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @s: string to be capitalized
 *
 * Return: a pointer to the string after capitalization
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
			i++;
		if (s[i - 1] == ' ' ||
		    s[i - 1] == '\t' ||
		    s[i - 1] == '\n' ||
		    s[i - 1] == ',' ||
		    s[i - 1] == ';' ||
		    s[i - 1] == '.' ||
		    s[i - 1] == '!' ||
		    s[i - 1] == '?' ||
		    s[i - 1] == '"' ||
		    s[i - 1] == '(' ||
		    s[i - 1] == ')' ||
		    s[i - 1] == '{' ||
		    s[i - 1] == '}' ||
		    i == 0)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
