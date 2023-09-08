#include <stdio.h>
/**
 * main - main - prints all the numbers of base 16 in lowercase
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char xy;

	n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}

	xy = 'a';

	while (xy <= 'f')
	{
		putchar(xy);
		xy++;
	}
	putchar('\n');

	return (0);
}
