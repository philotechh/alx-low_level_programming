#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 - 9
 * followed by a new line
 * Return: nothing
 */
void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a != '2' && a != '4')
		{
			_putchar(a);
		}
	}
	_putchar('\n');
}
