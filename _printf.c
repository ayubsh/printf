#include "main.h"
#include <string.h>
#include <stdarg.h>


int _printk(const char *format, va_list args)
{
	int char_temp;
	char *string_temp;
	char ch;
	int length = 0;

	while ((ch = *format++))
	{
		if (ch == '%')
		{
			switch (ch = *format++)
			{
				case '%':
					{
						_putchar(*format);
						length++;
						break;
					}
				case 'c':
					{
						char_temp = va_arg(args, int);
						_putchar(char_temp);
						length++;
						break;
					}
				case 's':
					{
						string_temp = va_arg(args, char *);
						while (*string_temp)
						{
							_putchar(*string_temp);
							string_temp++;
						}

						length += strlen(string_temp);
						break;
					}
				
			}
		}
	}
	return (length);
}

int _printf(const char *format, ...)
{
	int length;
	va_list args;

	va_start(args, format);
	length = _printk(format, args);
	
	va_end(args);

	return (length);
}
