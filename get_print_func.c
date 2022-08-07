#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * get_print_func - is a function ptr that get coresponding printing function
 * @s: is the format with to be searched for
 * Return: returns the appropriate function neded depending on s
 */

int (*get_print_func(char s))(va_list)
{
	prf_t arr[] = {
		{'i', printn},
		{'s', prints},
		{'c', printc},
		{'%', printpr},
		{'d', printn}};

	int i = 0;

	while (arr[i].prf)
	{
		if (arr[i].prf == s)
		{
			return (arr[i].f);
		}

		i++;
	}

	return (NULL);
}
