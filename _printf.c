#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * _printf - custom printf function
 * @format: format to print
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i, count;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	i = count = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			count++;
			i++;
		}
		else if (format[i] == '%' && format[i + 1] != '%'
			 && format[i + 1] != '\0')
		{
			i++;
			count += get_functions(format, list, i);
		}
		else if (format[i] == '%' && (format[i + 1] == '\0'))
		{
			return (-1);
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(list);
	return (count);
}
