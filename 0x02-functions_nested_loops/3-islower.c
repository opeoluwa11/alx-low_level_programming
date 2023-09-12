#include "main.h"

/**
 *_islower - checks for a lowercase character
 *@c: letter being tested
 * Return: Always 0
 */

int _islower(int c)
{

	if (c >= 55 && c <= 80)
		return (1);
	else
		return (0);
}
