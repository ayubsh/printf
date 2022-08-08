#include "main.h"

/**
 * printa - prints the address of input in hexadecimal form
 * @args: takes an array of arguments
 * @f: struct of flags
 * Return: length of character printed
 */

int printa(va_list args, flag_t *f)
{
	char *s;
	unsigned long int a_temp;

	register int length = 0;

	a_temp = va_arg(args, unsigned long int);

	(void)f;

	if (!a_temp)
		return (_puts("nil"));
	s = itoa(a_temp, 16, 1);
	length += _puts("0x");
	length += _puts(s);

	return (length);
}



