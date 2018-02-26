#include "holberton.h"

void find_num(int n);

/**
 * print_int - prints a name as is
 * @list: list
 *
 * Return: Nothing.
 */
int print_int(va_list list)
{
	int number;

	number = va_arg(list, int);

	find_num(number);

	_putchar('\n');

	return (0);
}

/**
 * find_num - prints a name as is
 * @n: number to find
 *
 * Return: Nothing.
 */
void find_num(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}
		if (n / 10)
		{
			find_num(n / 10);
		}
		_putchar(n % 10 + '0');
	}
}
