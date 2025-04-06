#include "main.h"

/**
 * print_unknown - Prints unknown format as literal
 * @specifier: the unknown specifier
 * Return: Number of characters printed
 */
int print_unknown(char specifier)
{
	write(1, "%", 1);
	write(1, &specifier, 1);
	return (2);
}
