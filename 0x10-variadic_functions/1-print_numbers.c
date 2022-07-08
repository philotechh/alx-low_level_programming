#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 *
 * Return: no return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list arg_list;
	unsigned int;

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(arg_list, const unsigned int);

		printf("%d", x);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	 va_end(arg_list);
}

