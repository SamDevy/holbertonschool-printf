/* main.h */
#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);

int _putchar(char c);
int print_string(char *s);
int print_number(int n);
int print_binary(unsigned int n);

int print_unsigned_rec(unsigned int n, const char *digits, int base);
int print_unsigned(unsigned int n);
int print_octal(unsigned int n);
int print_hex_lower(unsigned int n);
int print_hex_upper(unsigned int n);

#endif /* MAIN_H */
