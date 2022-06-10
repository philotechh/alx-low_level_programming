#include "main.h"

/**
 * print_numbers - a function that prints a number from 0 to 9
 * followed by a new line
 * Return: Nothing
 */
void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
