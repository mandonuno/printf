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
