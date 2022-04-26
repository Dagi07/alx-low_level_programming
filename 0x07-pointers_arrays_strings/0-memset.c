#include "main.h"

/**
 * _memset - Fill memory with a constant byte
 * @s: A pointer to the memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int index;

    for (index = 0; index < n; index++)
    {
      s[i] = b;
    }
    return (s);
}
