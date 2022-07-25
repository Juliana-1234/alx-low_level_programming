#include "main.h"

/**
 * _islower -Short description, single line
 *
 * @c: The character to be checked.
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);

	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
