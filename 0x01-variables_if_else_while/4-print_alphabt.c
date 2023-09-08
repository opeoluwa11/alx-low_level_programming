#include <stdlib.h>
#include <stdio.h>

/**
* main - Program entry point
* Program will write English alphabet
* variable n each time it is executed
* Return: Always 0 (Success)
*/
int main(void)
{
	char n;

	n = 'a';
	while (n <= 'z');
	{
		if (n !='e' && n !='q')
		{
			putchar(n);
			n++;
		}
	}
	putchar('\n');
	return (0);
}
