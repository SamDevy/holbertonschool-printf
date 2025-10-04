/* _printf.c */
#include "main.h"
#include <stdarg.h>

/**
 * _printf - Custom printf function that prints formatted output to stdout
 * @format: Format string with text and format specifiers
 *           Supported: %c, %s, %%, %d, %i, %b, %u, %o, %x, %X
 *
 * Return: number of characters printed, or -1 if format is NULL or invalid
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
			{
				va_end(args);
				return (-1);
			}
			if (*format == 'c')
				count += _putchar(va_arg(args, int));
			else if (*format == 's')
				count += print_string(va_arg(args, char *));
			else if (*format == '%')
				count += _putchar('%');
			else if (*format == 'd' || *format == 'i')
				count += print_number(va_arg(args, int));
			else if (*format == 'b')
				count += print_binary(va_arg(args, unsigned int));
			else if (*format == 'u')
				count += print_unsigned(va_arg(args, unsigned int));
			else if (*format == 'o')
				count += print_octal(va_arg(args, unsigned int));
			else if (*format == 'x')
				count += print_hex_lower(va_arg(args, unsigned int));
			else if (*format == 'X')
				count += print_hex_upper(va_arg(args, unsigned int));
			else
			{
				count += _putchar('%');
				count += _putchar(*format);
			}
		}
		else
		{
			count += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count);
}
