#include <stdio.h>
/**
 * main - prints the alphabet in lowercase except e and q
 *
 * Return: Always 0
 */

int main(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		if (c != 101 && c != 113)
			putchar(c);
	}
	putchar('\n');
	return (0);
}
