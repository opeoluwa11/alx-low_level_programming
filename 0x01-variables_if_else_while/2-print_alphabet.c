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
	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	return (0);
}
