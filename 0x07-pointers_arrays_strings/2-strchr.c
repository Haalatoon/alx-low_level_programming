#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: string parameter
 * @c: character to locate
 * Return: a pointer to the first occurrence of the character c
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			break;
	}
	if (s[i] != '\0')
		return (s + i);
	else
		return (NULL);
}
