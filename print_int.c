#include "main.h"

/**
 * print_int - Prints an integer
 * @args: va_list
 * Return: Number of characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		num = -n;
	}
	else
	{
		num = n;
	}

	count += print_digits(num);
	return (count);
}

/**
 * print_digits - Recursively prints unsigned int digits
 * @num: The number to print
 * Return: Number of characters printed
 */
int print_digits(unsigned int num)
{
	int count = 0;
	char digit;

	if (num / 10)
		count += print_digits(num / 10);

	digit = '0' + (num % 10);
	write(1, &digit, 1);
	count++;

	return (count);
}
