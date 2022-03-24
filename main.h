#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

/* PRINTF PROTOTYPE */
int _printf(const char *format, ...);

/* OTHERS */
int _putchar(char c);
int _len(char *str);
void case_c(char charp, va_list c_list, unsigned int *i, unsigned int *bcount);
void print_number(int n);
int print_int(va_list i_list);

#endif
