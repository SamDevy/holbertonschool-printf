#include "main.h"

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
