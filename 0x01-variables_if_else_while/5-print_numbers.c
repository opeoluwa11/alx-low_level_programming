#include <stdlib.h>
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
	n = 0;
	while (n <= 10)
	{
		printf("%d", n);
	}
	printf('\n');
	return (0);
}
