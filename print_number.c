#include "main.h"

/**
 * print_number - Prints an integer to stdout.
 * @n: The integer to print (currently unused).
 *
 * Return: Always returns 0 (success).
 */
int print_number(int n)
{
	int count = 0;
	long num = n;
	if (num < 0)
	{
		count += _putchar('-');
		num = -num;
	}
	if (num / 10)
		count += print_number(num / 10);
	count += _putchar((num % 10) + '0');
	return (count);
}
