#include "main.h"

/**
 * _islower - Shows 1 if the input is a
 * lowercase character. Another cases, shows
 * 0
 *
 * @c: The character in ASCII code
 *
 * Return: 1 for lowercase character, 0 for others
 */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
