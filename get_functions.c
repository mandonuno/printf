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
		{'\0', NULL}
	};
	i = count = 0;
	while (op[i].type != '\0')
	{
		if (format[pos] == op[i].type)
		{
			count += (op[i].p(list));
			break;
		}
		i++;
	}
	return (count);
}
