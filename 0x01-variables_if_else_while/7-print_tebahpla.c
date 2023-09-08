#include <stdio.h>
/**
 * main - main - prints the lowercase alphabet in reverse
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	n = 'z';

	while (n >= 'a')
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
