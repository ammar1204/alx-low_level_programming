#include "main.h"

/**
 * _memset - dsgfhf
 * @s: sdff
 * @c: sdsfdgffd
 * @n: sarftred
 * Return: asd
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for(index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
