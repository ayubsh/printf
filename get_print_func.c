#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * get_print_func - is a function ptr that get coresponding printing function
 * @s: is the format with to be searched for
 * Return: returns the appropriate function neded depending on s
 */

int (*get_print_func(char s))(va_list, flag_t *)
{
	prf_t arr[] = {
		{'i', printn},
		{'s', prints},
		{'c', printc},
		{'%', printpr},
		{'d', printn},
		{'b', printb},
		{'u', printu},
		{'o', printo},
		{'x', printhex},
		{'X', printhexb},
		{'R', printr13},
		{'r', printrev},
		{'S', printS},
		{'p', printa},
	};

	int flg = 14;

	register int i;

	for (i = 0; i < flg; i++)
	{
		if (arr[i].prf == s)
		{
			return (arr[i].f);
		}
	}

	return (NULL);
}

/**
 * get_f - turns on flags if _printf finds
 * a flag modifier in the format string
 * @s: character that holds the flag specifier
 * @f: pointer to the struct flags in which we turn the flags on
 *
 * Return: 1 if a flag has been turned on, 0 otherwise
 */
int get_f(char s, flag_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->pl = 1;
			i = 1;
			break;
		case ' ':
			f->sp = 1;
			i = 1;
			break;
		case '#':
			f->hs = 1;
			i = 1;
			break;
	}

	return (i);
}
