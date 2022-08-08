#include "main.h"

/**
 * ndigit- returns the number of digits in an integer
 * @n: integer to evaluate
 * Return: number of digits
 */
int ndigit(int n)
{
	unsigned int d = 0;

	unsigned int u;

	if (n < 0)
		u = n * -1;
	else
		u = n;
	while (u != 0)
	{
		u /= 10;
		d++;
	}

	return (d);
}

/**
 * prn - helper function that loops through
 * an integer and prints all its digits
 * @num: integer to be printed
 */
void prn(int num)
{
	unsigned int num1;

	if (num < 0)
	{
		_putchar('-');
		num1 = -num;
	}
	else
		num1 = num;
	if (num1 / 10)
		prn(num1 / 10);
	_putchar((num1 % 10) + '0');
}
