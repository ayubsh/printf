#include "main.h"
#include <string.h>

/**
 * printn - prints an interger
 * @args: takes array of arguments
 * Return: returns the length of the interger
 */
int printn(va_list args)
{
	int len = 0;

	int int_temp, i;
	char buffer[512];

	int_temp = va_arg(args, int);
	itoa(int_temp, buffer, 10);
	len += strlen(buffer);

	for (i = 0; buffer[i] != '\0'; i++)
	{
		_putchar(buffer[i]);
	}

	return (len);
}

/**
 * prints - prints char * (string)
 * @args: takes in array of args
 * Return: the string
 */
int prints(va_list args)
{
	char *string_temp = va_arg(args, char *);

	if (!string_temp)
		string_temp = "(null)";

	return (_puts(string_temp));

}

/**
 * printc - print character
 * @args: takes in argument list
 * Return: 1
 */
int printc(va_list args)
{

	int char_temp = va_arg(args, int);
	 _putchar(char_temp);

	return (1);
}

/**
 * printpr - prints the percentage signe (%)
 * @args: takes an argument list
 * Return: returns the ascii value of %
 */
int printpr(va_list args)
{
	(void)args;
	return (_putchar('%'));
}
