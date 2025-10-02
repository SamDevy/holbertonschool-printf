#include <unistd.h>

/**
 * _putchar - Writes a single character to stdout.
 * @c: The character to write.
 *
 * Return: Always returns the number of bytes written (success).
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
