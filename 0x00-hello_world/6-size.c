#include <stdio.h>

/**
 * main - prints out size of modifiers to stout
 * Return: 0 when success
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %lu\n", sizeof(c));
	printf("Size of an int: %lu\n", sizeof(i));
	printf("Size of a long int: %lu\n", sizeof(li));
	printf("Size of a long long int: %lu\n", sizeof(lli));
	printf("Size of a float: %lu", sizeof(f));
	return (0);
}
