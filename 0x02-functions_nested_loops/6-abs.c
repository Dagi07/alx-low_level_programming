#include "main.h"

/**
 *_abs - a function that computes the absolute value of an integer
 *@n: The number
 *Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
 *Returns abs of the number
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	return (0);
}
