#include "main.h"
/**
 * leet -  encodes a string into 1337
 * @s: string to encode
 *
 * Return: pointer to the encoded string
 */

char *leet(char *s)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0;  j < 10; j++)
		{
			if (s[i] == s1[j])
				s[i] = s2[j / 2];
		}
	}
	return (s);
}
