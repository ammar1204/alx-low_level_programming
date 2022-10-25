#include "main.h"

/**
 * _strcpy - coopies the string
 * @dest: destinatuon
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, charc *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
