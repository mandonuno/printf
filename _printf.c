#include "holberton.h"
/**
 * _printf - prints a name as is
 * @format: args
 *
 * Return: Nothing.
 */
int _printf(const char *format, ...)
{
	va_list list;

	int i = 0, j = 0;

	if (format == 0)
		return (0);

	va_start(list, format);

	sel specifiers[] = {
		{'c', print_char},
		{'i', print_int},
		{'d', print_int},
		{'f', 0},
		{'s', print_string},
		{'\0', 0}
	};

	while (format[i] != '\0')
	{
		j = 0;
		while (specifiers[j].type != '\0')
		{
			if (specifiers[j].type == format[i])
			{
				specifiers[j].p(list);
			}
			j++;
		}
		i++;
	}

	va_end(list);

	return (0);

}
