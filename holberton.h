#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct _print_func - map a print function to a conversion specifier
 * @specifier: the conversion specifier
 * @f: the function to call to format and print output
 */
typedef struct _print_func
{
char specifier;
int (*f)(va_list);
} print_func;

int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list);
int print_s(va_list);
int print_d(va_list);
void _print_d(int n, int *count);
int print_percent(va_list);
int (*get_print_any_func(char c))(va_list);

#endif /* HOLBERTON_H */
