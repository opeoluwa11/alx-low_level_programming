#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y;

	x = 48;

	while (x <= 58)
	{
		y = 49;
		while (y <= 57)
		{
			if (y > x)
			{
				putchar(x);
				putchar(y);
				if (x != 56 || y != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		x++;
	}

	putchar('\n');

	return (0);
}
