#include "main.h"

/**
 * printb - print number in binary form
 * @args: takes array of args
 * Return: returns the converted form
 */

int printb(va_list args)
{
	char s[512];

	unsigned int num = va_arg(args, unsigned int);

	itoa(num, s, 2);

	return (_puts(s));
}
