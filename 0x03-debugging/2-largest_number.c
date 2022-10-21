#include <stdio.h>

#include "main.h"



 /*
 * fdgbhgbg
 * main - prints the largest of 3 integers
 * efgtryjjtydnhjdtyujdt
 * Return: 0
 * rhhdtty
 */



int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (b > c)
			largest = a;
		else if (a > c)
			largest = a;
		else
			largest = c;

	}
	else
	{
		if (b < c)
			largest = c;
		else
			largest = b;
	}
	return (largest);
}
