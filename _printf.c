#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - its a clone for the printf functions in standard c
 * @format: takes formated input to be printed
 * Return: returns the length of the printed input
 */

int _printf(const char *format, ...)
{
	int (*funcptr)(va_list, flag_t *);
	const char *ch;
	va_list args;

	flag_t fs = {0, 0, 0};

	register int length = 0;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (ch = format; *ch; ch++)
	{
		if (*ch == '%')
		{
			ch++;
			if (*ch == '%')
			{
				length += _putchar('%');
				continue;
			}
			while (get_f(*ch, &fs))
				ch++;
			funcptr = get_print_func(*ch);
			length += (funcptr) ? funcptr(args, &fs) : _printf("%%%c", *ch);
		}
		else
			length += _putchar(*ch);
	}
	_putchar(-1);
	va_end(args);
	return (length);
}
