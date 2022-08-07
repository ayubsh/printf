#include "main.h"
#include <string.h>

int printn(va_list args)
{
		int len = 0;
		int int_temp;
		char buffer[512];

		int_temp = va_arg(args, int);
		itoa(int_temp, buffer, 10);
		len += strlen(buffer);

		for (int i = 0; buffer[i] != '\0'; i++)
		{
				_putchar(buffer[i]);

		}
	   
		return (len);
}


int prints(va_list args)
{
	char *string_temp = va_arg(args, char *);

	if(!string_temp)
		string_temp = "(null)";

	return (_puts(string_temp));

}


int printc(va_list args)
{

	 _putchar(va_arg(args, int));

	 return (1);	 
}
