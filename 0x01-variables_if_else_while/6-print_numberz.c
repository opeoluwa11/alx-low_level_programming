#include <stdio.h>

/**
 * main - prints all single digit numbers of 
 * base 10 starting from 0,
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	n = 48;

	while (n < 58)
	{
		putchar(n);
		n++;
	}
	printf("\n");

	return (0);
}