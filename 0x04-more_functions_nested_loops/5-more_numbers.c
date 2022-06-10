#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers
 * from 0 - 14, followed by a new line
 * Return: void
 */

void more_numbers(void)
{
	int i, b;

	for (i = 0; i < 10; i++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b >= 10)
				_putchar((b / 10) + 48);
			_putchar((b % 10) + 48);
		}
		_putchar('\n');

	}
}
