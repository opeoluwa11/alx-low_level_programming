#include <stdio.h>

/**
 * main - print single digit numbers
 * Description: print single digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	n = 0;

	while (n < 10)
	{
		putchar(n);
		n++;
	}

	putchar('\n');
	return (0);
}
