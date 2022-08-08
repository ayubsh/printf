#include "main.h"

/**
 * printb - print number in binary form
 * @args: takes array of args
 * @f: ptr to flag struct
 * Return: returns the converted form
 */

int printb(va_list args, flag_t *f)
{
	unsigned int num = va_arg(args, unsigned int);

	char *s = itoa(num, 2, 0);

	(void)f;

	return (_puts(s));
}


/**
 * printhex - prints input in hexadecimal form
 * @args: an array of arguments
 * @f: ptr to flag struct
 * Return: returns string of hexs
 */

int printhex(va_list args, flag_t *f)
{
	unsigned int hex_temp;
	char *buffer;
	int length;

	length = 0;
	hex_temp = va_arg(args, unsigned int);
	buffer = itoa(hex_temp, 16, 0);

	if (f->hs == 1 && buffer[0] != '0')
		length += _puts("0x");
	length += _puts(buffer);

	return (length);
}

/**
 * printhexb - prints input in hexadecimal form
 * @args: an array of aguments
 * @f: ptr to flag struct
 * Return: length of hex printed
 */
int printhexb(va_list args, flag_t *f)
{
	unsigned int hexb_temp;
	char *buffer;
	int length;

	hexb_temp = va_arg(args, unsigned int);
	length = 0;

	buffer = itoa(hexb_temp, 16, 1);

	if (f->hs == 1 && buffer[0] != '0')
		length += _puts("0X");

	length += _puts(buffer);

	return (length);
}


/**
 * printo - print input in octal form (base 8)
 * @args: an array of arguments
 * @f: ptr to flag struct
 * Return: length of octal printed
 */

int printo(va_list args, flag_t *f)
{
	unsigned int o_temp;
	int length;
	char *buffer;

	o_temp = va_arg(args, unsigned int);
	buffer = itoa(o_temp, 8, 0);
	length = 0;

	if (f->hs == 1 && buffer[0] != '0')
		length += _putchar('0');

	length += _puts(buffer);

	return (length);
}
