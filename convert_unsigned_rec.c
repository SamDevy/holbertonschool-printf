// convert_unsigned_rec.c
#include "main.h"

/**
 * print_unsigned_rec - Recursively prints an unsigned int in the given base
 * @n: unsigned number to print
 * @digits: digit map, e.g. "0123456789abcdef"
 * @base: numeric base (8, 10, 16)
 * Return: number of characters printed, or -1 on write error
 */
int print_unsigned_rec(unsigned int n, const char *digits, int base)
{
	int count = 0;
	int r;

	if (n >= (unsigned int)base)
	{
		r = print_unsigned_rec(n / (unsigned int)base, digits, base);
		if (r < 0)
			return -1;
		count += r;
	}

	if (_putchar(digits[n % (unsigned int)base]) < 0)
		return -1;

	return count + 1;
}

int print_unsigned(unsigned int n) { return (n == 0) ? (_putchar('0') < 0 ? -1 : 1) : print_unsigned_rec(n, "0123456789", 10); }
int print_octal(unsigned int n)    { return (n == 0) ? (_putchar('0') < 0 ? -1 : 1) : print_unsigned_rec(n, "01234567", 8); }
int print_hex_lower(unsigned int n){ return (n == 0) ? (_putchar('0') < 0 ? -1 : 1) : print_unsigned_rec(n, "0123456789abcdef", 16); }
int print_hex_upper(unsigned int n){ return (n == 0) ? (_putchar('0') < 0 ? -1 : 1) : print_unsigned_rec(n, "0123456789ABCDEF", 16); }
