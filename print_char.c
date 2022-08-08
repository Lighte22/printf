#include "main.h"
#include <stdarg.h>

/**
* print_char -> prints a char
* @args: arguments list
*
* Return: always 1 (success)
*/
int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

