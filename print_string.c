#include "main.h"

/**
 * print_string - Prints a string to stdout, character by character.
 * @str: Pointer to the string to print. If NULL, prints "(null)".
 *
 * Return: Always returns the number of characters printed (success).
 */
int print_string(char *str)
{
	int count = 0;

	if (!str)
		str = "(null)";

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}
	return (count);
}
