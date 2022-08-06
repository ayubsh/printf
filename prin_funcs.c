#include "main.h"
#include <string.h>

int printn(va_list args)
{
		int len = 0;
		int int_temp;
		char buffer[512];

		int_temp = va_arg(args, int);
		itoa(int_temp, buffer, 10);
		for (int i = 0; buffer[i] != '\0'; i++)
		{
				_putchar(buffer[i]);

		}
		len += strlen(buffer);
	   
		return (len);
}


int prints(va_list args)
{
   char *string_temp;
	 int len = 0;

	 string_temp = va_arg(args, char *);
	 len += strlen(string_temp);

	 while (*string_temp)
	 {
	 		_putchar(*string_temp);
			string_temp++;
	 }

	 return (len);

}


int printc(va_list args)
{
   int char_temp;
	 int len = 0;

	 char_temp = va_arg(args, int);
	 _putchar(char_temp);
	 len++;

	 return (len);	 
}
