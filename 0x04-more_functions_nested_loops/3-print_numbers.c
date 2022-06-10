#include "main.h"
<<<<<<< HEAD
/**
 * main - print number 0-9
 *
 * Return : Always 0 (success)
 */

void print_numbers(void);
=======


 /**
 *
 * main - Prints _putchar as a message.
 *
 * Return: Always 0 (Success)
 */

int main(void)
>>>>>>> 10ef0c367368044f6a441cb653706b85be855a71

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


