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
	return (a > 0 ? a : -a);

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
 * @buffer: ptr to array where the string is returned to
 * @base: the base to be converted to
 */
char *itoa(int value, char *buffer, int base)
{
	if (base < 2 || base > 32)
	{
		return (buffer);
	}

	int n = abs(value);

	int i = 0;

	while (n)
	{
		int r = n % base;

		if (r >= 10)
		{
			buffer[i++] = 65 + (r - 10);
		}
		else
		{
			buffer[i++] = 48 + r;
		}

		n = n / base;
	}

	if (i == 0)
	{
		buffer[i++] = '0';
	}

	if (value < 0 && base == 10)
	{
		buffer[i++] = '-';
	}

	buffer[i] = '\0';

	return (reverse(buffer, 0, i - 1));
}
