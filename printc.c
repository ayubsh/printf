#include "main.h"

/**
 * printS - Non printable characters
 * (0 < ASCII value < 32 or >= 127)
 * @args: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int printS(va_list args, flag_t *f)
{
	int i, length;
	char *res;
	char *s_temp;

	s_temp = va_arg(args, char *);
	length = 0;

	(void)f;
	if (!s_temp)
		return (_puts("(null)"));

	for (i = 0; s_temp[i]; i++)
	{
		if (s_temp[i] > 0 && (s_temp[i] < 32 || s_temp[i] >= 127))
		{
			_puts("\\x");
			length += 2;
			res = itoa(s_temp[i], 16, 0);
			if (!res[1])
				length += _putchar('0');
			length += _puts(res);
		}
		else
			length += _putchar(s_temp[i]);
	}
	return (length);
}

/**
 * printrev - prints a string in reverse
 * @args: argument from _printf
 * @f: ptr to the struct flags
 * Return: length of the printed string
 */
int printrev(va_list args, flag_t *f)
{
	int i, j;
	char *s_temp;

	s_temp = va_arg(args, char *);
	i = 0;

	(void)f;
	if (!s_temp)
		s_temp = "(null)";

	while (s_temp[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s_temp[j]);

	return (i);
}

/**
 * printr13 - prints a string using rot13
 * @args: list of arguments from _printf
 * @f: pointer to the struct flags that determines
 * Return: length of the printed string
 */
int printr13(va_list args, flag_t *f)
{
	int i, j;
	char *s;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	s = va_arg(args, char *);

	(void)f;
	for (j = 0; s[j]; j++)
	{
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
			_putchar(s[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (s[j] == rot13[i])
					_putchar(ROT13[i]);
			}
		}
	}

	return (j);
}

/**
 * printpr - prints the percentage signe (%)
 * @args: takes an argument list
 * @f: ptr to struct of flag
 * Return: returns the ascii value of %
 */
int printpr(va_list args, flag_t *f)
{
	(void)args;
	(void)f;
	return (_putchar('%'));
}
