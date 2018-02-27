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
	int number = 0;

	number = va_arg(list, int);
	find_num(number);
	return (0);
}

/**
 * find_num - prints a name as is
 * @n: number to find
 *
 * Return: Nothing.
 */
int find_num(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n *= -1;
		}
		if (n / 10)
		{
			find_num(n / 10);
		}
		_putchar(n % 10 + '0');
		return (n % 10);
	}
}
