#include "main.h"

/**
 * print_alphabet_x10 -print the alphabet 10x in lowercase
 *
 * Return:Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (i = 97 ; i <= 122 ; i++)
			_putchar(i);
	}
	_putchar('\n');


}


