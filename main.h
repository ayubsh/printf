#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

typedef struct flag
{
	int pl;
	int sp;
	int hs;
} flag_t;


typedef struct prf
{
  char prf;
  int (*f)(va_list args, flag_t *f);
}prf_t;


int (*get_print_func(char s))(va_list, flag_t *);
int get_f(char s, flag_t *f);

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
char* itoa(unsigned long int value, int base, int c);
void prn(int num);
int ndigit(int n);

int printn(va_list args, flag_t *f);
int prints(va_list args, flag_t *f);
int printc(va_list args, flag_t *f);
int printpr(va_list args, flag_t *f);
int printb(va_list args, flag_t *f);
int printhex(va_list args, flag_t *f);
int printhexb(va_list args, flag_t *f);
int printo(va_list args, flag_t *f);
int printu(va_list args, flag_t *f);
int printr13(va_list args, flag_t *f);
int printrev(va_list args, flag_t *f);
int printS(va_list args, flag_t *f);
int printa(va_list args, flag_t *f);

#endif
