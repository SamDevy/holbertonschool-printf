#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);

/* Existing helpers you already have */
int _putchar(char c);
int print_string(char *s);
int print_number(int n);
int print_binary(unsigned int n);

/* New unsigned conversion prototypes */
int print_unsigned_rec(unsigned int n, const char *digits, int base);
int print_unsigned(unsigned int n);      /* %u */
int print_octal(unsigned int n);         /* %o */
int print_hex_lower(unsigned int n);     /* %x */
int print_hex_upper(unsigned int n);     /* %X */

#endif /* MAIN_H */
