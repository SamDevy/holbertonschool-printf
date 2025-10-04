/* convert_unsigned_rec.c */
#include "main.h"

/**
 * print_unsigned_rec - Prints unsigned int in given base using recursion
 * @n: unsigned number to print
 * @digits: digit map string (e.g. "0123456789abcdef")
 * @base: numeric base (8, 10, or 16)
 *
 * Return: number of characters printed, or -1 on error
 */
int print_unsigned_rec(unsigned int n, const char *digits, int base)
{
	int count = 0;
	int r;

	if (n >= (unsigned int)base)
	{
		r = print_unsigned_rec(n / (unsigned int)base, digits, base);
		if (r < 0)
			return (-1);
		count += r;
	}

	if (_putchar(digits[n % (unsigned int)base]) < 0)
		return (-1);

	return (count + 1);
}

/**
 * print_unsigned - Prints unsigned int in decimal (%u)
 * @n: number to print
 *
 * Return: number of characters printed, or -1 on error
 */
int print_unsigned(unsigned int n)
{
	if (n == 0)
		return (_putchar('0') < 0 ? -1 : 1);
	return (print_unsigned_rec(n, "0123456789", 10));
}

/**
 * print_octal - Prints unsigned int in octal (%o)
 * @n: number to print
 *
 * Return: number of characters printed, or -1 on error
 */
int print_octal(unsigned int n)
{
	if (n == 0)
		return (_putchar('0') < 0 ? -1 : 1);
	return (print_unsigned_rec(n, "01234567", 8));
}

/**
 * print_hex_lower - Prints unsigned int in lowercase hex (%x)
 * @n: number to print
 *
 * Return: number of characters printed, or -1 on error
 */
int print_hex_lower(unsigned int n)
{
	if (n == 0)
		return (_putchar('0') < 0 ? -1 : 1);
	return (print_unsigned_rec(n, "0123456789abcdef", 16));
}

/**
 * print_hex_upper - Prints unsigned int in uppercase hex (%X)
 * @n: number to print
 *
 * Return: number of characters printed, or -1 on error
 */
int print_hex_upper(unsigned int n)
{
	if (n == 0)
		return (_putchar('0') < 0 ? -1 : 1);
	return (print_unsigned_rec(n, "0123456789ABCDEF", 16));
}
