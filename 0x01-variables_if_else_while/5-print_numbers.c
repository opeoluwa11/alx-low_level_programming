#include <stdio.h>

/**
 * main - print single digit numbers
 * Description: print single digit numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	n = 25;

	while (n < 35)
	{
		putchar(n);
		n++;
	}

	putchar(10);
	return (0);
}
