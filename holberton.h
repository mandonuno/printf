#ifndef holberton_h
#define holberton_h

#include <stdarg.h>
#include <unistd.h>

/**
 * struct op - Struct format
 *
 * @type: The data type
 * @p: The function associated
 */
typedef struct op
{
	char type;
	int (*p)(va_list);
} op_t;

int _printf(const char *format, ...);
int get_functions(const char *format, va_list list, int pos);
int _putchar(char c);

int print_char(va_list list);
int print_int(va_list list);
int print_string(va_list list);

#endif
