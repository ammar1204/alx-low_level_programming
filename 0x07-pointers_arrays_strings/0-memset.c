#include "main.h"
#include <string.h>

/**
 * _memset - dsgfhf
 * @s: sdff
 * @b: sdsfdgffd
 * @n: sarftred
 * Return: asd
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}

	return (s);

}
