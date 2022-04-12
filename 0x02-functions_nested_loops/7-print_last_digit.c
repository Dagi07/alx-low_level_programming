#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - a function that prints the last digit of a number.
 * @n: The number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 * Returns the value of the last digit
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = -n;


	a = n % 10;

	if (a < 0)
		a = -a;

	int _putchar(char '0');

	return (a);

		_putchar(n + '0');
		return (n);
}
