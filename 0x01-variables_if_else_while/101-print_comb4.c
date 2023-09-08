#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z;

	x = 48;

	while (x < 58)
	{
		y = 49;
		while ( y < 58) 
		{
			z = 50;
			while (z < 58)
			{
				if (z > y && y > x)
				{
					putchar(x);
					putchar(y);
					putchar(z);
					if (x != 55 || y != 56)
					{
						putchar('');
						putchar(' ');
					}
				}
				z++
			}
			y++;
		}
		x++;

	}

	putchar('\n');

	return (0);
}
