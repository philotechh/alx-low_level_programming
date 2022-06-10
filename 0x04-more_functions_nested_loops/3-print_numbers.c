#include "main.h"
/**
 * main - print number 0-9
 *
 * Return : Always 0 (success)
 */

void print_numbers(void);

{

    int str[] = {48, 49, 50, 51, 52, 53, 54, 55, 56, 57};

    int count, sz;


    sz = sizeof(str) / sizeof(int);

    for (count = 0; count < sz; count++)

    {

        _putchar(str[count]);

    }

    _putchar('\n');

    return (0);

}


