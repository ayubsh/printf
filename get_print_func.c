#include <stdlib.h>
#include <string.h>
#include "main.h"


int (*get_print_func(char s))(va_list)
{
    prf_t arr[] = {
        {'i', printn},
        {'s', prints},
        {'c', prints},
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
