#include <stdio.h>

/**
* main - Program entry point
* prints all single digit numbers 
* of base 10 starting from 0
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
