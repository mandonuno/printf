#include "holberton.h"
/**
 * get_functions - finds the right operation
 * @format: format of string
 * @list: list of specifiers
 * @pos: position of char
 * Return: count, or NULL if fails
 */
int get_functions(const char *format, va_list list, int pos)
{
	int i, count;

	op_t op[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_numbers},
		{'i', print_numbers},
		{'\0', NULL}
	};
	i = count = 0;
	while (op[i].type != '\0')
	{
		if (format[pos] == op[i].type)
		{
			/*
			* adding this condition so that
			we don't also return the string stuff for digits
			*/
			if (format[pos] == 'd' || format[pos] == 'i')
			{
				count -= (op[i].p(list));
			}
			else
			{
				count += (op[i].p(list));
			}
			break;
		}
		i++;
	}
	return (count);
}
