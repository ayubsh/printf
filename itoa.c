#include <math.h>
#include "main.h"

/**
 * swap - swaps the input
 * @x: value1
 * @y: value2
 * Return: void
 */
void swap(char *x, char *y)
{
	char t = *x;
	*x = *y;
	*y = t;
}

/**
 * abs - gets the absolute value
 * @a: value
 * Return: the abs value
 */
int abs(int a)
{
	a = a > 0 ? a : -a;
	return (a);
}

/**
 * reverse - reverse the input buffer
 * @buffer: an array containing string
 * @i: size of the buffer
 * @j: the number to be reversed
 * Return: ptr to char (string) in reverse
 */
char *reverse(char *buffer, int i, int j)
{
	while (i < j)
	{
		swap(&buffer[i++], &buffer[j--]);
	}

	return (buffer);
}

/**
 * itoa - converts string to int
 * @value: value to be converted
 * @c: ptr to array where the string is returned to
 * @base: the base to be converted to
 * Return: returns char * (string)
 */
char *itoa(unsigned long int value, int base, int c)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (c) ? "0123456789abcdef" : "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = rep[value % base];
		value /= base;
	} while (value != 0);

	return (ptr);
}
