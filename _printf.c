#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>


int _printf(const char *format, ...)
{

	int (*funcptr)(va_list);
	register int length = 0;
	const char *ch;
	
	va_list args;


	va_start(args, format);
	
	if (!format || (format[0] == '%' && !format[1]))
	{
		return (-1);
	}

	if (format[0] == '%' && format[1] == ' ' && !format[2])
	{
		return (-1);
	}


	while ((ch = format++))
	{
		if (*ch != '%')
		{
			_putchar(*ch);
			ch++;

		}
		else if (*ch == '%')
		{
			ch = format++;
			funcptr = get_print_func(*ch);	
			length = (funcptr) ? funcptr(args) : _printf("%%%c", *ch);
		}
	}
	va_end(args);

	return (length);
}
