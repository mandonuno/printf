#include "holberton.h"
/**
 * print_string - prints a name as is
 * @list: list
 *
 * Return: Nothing.
 */
int print_string(va_list list)
{
	int size = 0;
	char *args_string = va_arg(list, char*);

	while (args_string[size] != '\0')
	{
		_putchar(args_string[size]);
		size++;
	}
	_putchar('\n');
	
	return (size);
}
