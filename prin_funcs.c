#include "main.h"
#include <string.h>

/**
 * printn - prints an interger
 * @args: takes array of arguments
 * @f: ptr to struct of flag
 * Return: returns the length of the interger
 */
int printn(va_list args, flag_t *f)
{
	int n_temp;
	int length;

	n_temp = va_arg(args, int);
	length = ndigit(n_temp);

	if (f->sp == 1 && f->pl == 0 && n_temp >= 0)
		length += _putchar(' ');
	if (f->pl == 1 && n_temp >= 0)
		length += _putchar('+');
	if (n_temp <= 0)
		length++;

	prn(n_temp);

	return (length);
}

/**
 * prints - prints char * (string)
 * @args: takes in array of args
 * @f: ptr to struct of flag
 * Return: the string
 */
int prints(va_list args, flag_t *f)
{
	char *string_temp = va_arg(args, char *);

	(void)f;
	if (!string_temp)
		string_temp = "(null)";

	return (_puts(string_temp));

}

/**
 * printc - print character
 * @args: takes in argument list
 * @f: ptr to struct of flag
 * Return: 1
 */
int printc(va_list args, flag_t *f)
{
	int char_temp;

	(void)f;
	char_temp = va_arg(args, int);
	 _putchar(char_temp);

	return (1);
}


/**
 * printu - prints unsigned interger
 * @args: takes arrays of va-list
 * @f: ptr to flag struct
 * Return: ptr to string of unsigned int
 */
int printu(va_list args, flag_t *f)
{
	unsigned int u_temp;
	char *buffer;

	u_temp = va_arg(args, unsigned int);
	buffer = itoa(u_temp, 10, 0);

	(void)f;

	return (_puts(buffer));
}
