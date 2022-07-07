#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: sum of its parameters.
 */
int sum_them_all(const unsigned int n,...)
{
	va_list arglist;
	unsigned int i;
	int sum = 0;

	va_start(arglist, n);

	for (i=0; i < n; i++)
	{
		sum += va_arg(arglist, const unsigned int n);

		if (n==0)
			
			sum=0;
		else 
			sum +=0;
	}
	va_end(arglist);

	return sum;
}
	
