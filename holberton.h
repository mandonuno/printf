#ifndef holberton_h
#define holberton_h

#include <stdarg.h>
#include <unistd.h>

/**
 * struct specifiers - Struct format
 *
 * @type: The data type
 * @p: The function associated
 */
typedef struct specifiers
{
	char type;
	int (*p)(va_list);
} sel;

int _printf(const char *format, ...);

int _putchar(char c);

int print_char(va_list list);

int print_int(va_list list);

int print_string(va_list list);

#endif
