#include "main.h"

/**
 * print_char - Prints a single character
 * @args: Argument list
 *
 * Return: Number of characters printed
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	return (1);
}

/**
 * print_string - Prints a string
 * @args: Argument list
 *
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		write(1, str, 1);
		str++;
		count++;
	}
	return (count);
}

/**
 * print_percent - Prints a percent sign
 *
 * Return: Number of characters printed
 */
int print_percent(void)
{
	write(1, "%", 1);
	return (1);
}

/**
 * print_unknown - Prints unknown format as literal
 * @specifier: The unknown format specifier
 *
 * Return: Number of characters printed
 */
int print_unknown(char specifier)
{
	write(1, "%", 1);
	write(1, &specifier, 1);
	return (2);
}
