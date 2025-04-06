#include "main.h"

/**
 * print_binary - Prints an unsigned int in binary
 * @args: Argument list
 *
 * Return: Number of characters printed
 */
int print_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	int started = 0;
	unsigned int mask = 1 << 31;
	char bit;

	while (mask)
	{
		if (num & mask)
		{
			bit = '1';
			started = 1;
		}
		else
		{
			bit = '0';
		}

		if (started || mask == 1)
		{
			write(1, &bit, 1);
			count++;
		}
		mask >>= 1;
	}

	return (count);
}
