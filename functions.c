#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_char - prints a character
 * @list: list
 * Return: 0
 */
int print_char(va_list list)
{
	char ch;

	ch = va_arg(list, int);
	_putchar(ch);
	return (1);
}
/**
 * print_string - prints string
 * @list: string to print
 * Return: characters printed
 */
int print_string(va_list list)
{
	int i;
	char *s;

	s = va_arg(list, char *);

	if (s == NULL)
		s = "(null)";
	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
/**
 * print_numbers - prints numbers
 * @list: string to print
 * Return: characters printed
 */
int print_numbers(va_list list)
{
	int n, to_print, tens = 1, counter = 0;

	n = va_arg(list, int);

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{

		while (tens < n)
		{
			tens *= 10;
		}
		tens /= 10;

		while (tens >= 1)
		{
			to_print = n / tens;
			_putchar(to_print + '0');
			n = (n - (tens * to_print));
			tens /= 10;
			counter++;
		}
	}
	return (counter);
}


