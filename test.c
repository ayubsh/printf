/* #include "main.h" */
/* #include <stdio.h> */


/* int main(void) */
/* { */
/* 	char cha = 'a'; */
/* 	char *str = "AYUB  SHEIKH"; */
/* 	_printf("%c\n", cha); */
/* 	_printf("%s", str); */
/* 	return (0); */
/* } */

#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len, len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("From Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    _printf("%d", 123);
    printf("From Negative:[%d]\n", -762534);
    return (0);
}
