#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: Always 0
 */

int main(void)
{
	int c;

	for (c = 97; c < 123; c++)
		putchar(c);
	for (c = 65; c < 91; c++)
		putchar (c);
	putchar ('\n');
	return (0);
}
