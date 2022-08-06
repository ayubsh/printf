#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>


int _printk(const char *format, va_list args)
{
	int char_temp;
	char *string_temp;
	char ch;
	int int_temp;
	char buffer[512];

	int length = 0;

	while ((ch = *format++))
	{
		if (ch != '%')
		{
			_putchar(ch);
			ch++;
		}
		else if (ch == '%')
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

						length += strlen(string_temp);
						while (*string_temp)
						{
							_putchar(*string_temp);
							string_temp++;
						}

						break;
					}
				case 'd': case 'i':
					{
						int_temp = va_arg(args, int);
						itoa(int_temp, buffer, 10);
						for (int i = 0; buffer[i] != '\0'; i++)
						{
								_putchar(buffer[i]);

						}
						length += strlen(buffer);
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
