#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

typedef struct prf
{
  char prf;
  int (*f)(va_list args);
}prf_t;

int (*get_print_func(char s))(va_list);

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
char* itoa(int value, char* buffer, int base);

int printn(va_list args);
int prints(va_list args);
int printc(va_list args);
int printpr(va_list args);
int printb(va_list args);

#endif
