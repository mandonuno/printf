#include "holberton.h"
/**
 * print_char - prints a name as is
 * @list: list
 *
 * Return: Nothing.
 */
int print_char(va_list list)
{
	char character, new_line;

	character = va_arg(list, int);
	new_line = '\n';

	if (character == 0)
		return (-1);

	write(1, &character, 1);
	write(1, &new_line, 1);

	return (1);
}
