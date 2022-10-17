#include <stdio.h>

/**
 * main - prints the alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char le;

	for (le = 'z'; >= 'a'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}
