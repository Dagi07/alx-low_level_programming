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

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(li));
	printf("Size of a long long int: %lu byte(s)", sizeof(lli));
	printf("Size of a float: %lu byte(s)", sizeof(f));
	return (0);
}
