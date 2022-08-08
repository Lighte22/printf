#include "main.h"
#include <stdarg.h>
/**
* _printf -> print arguments to the standard output
* @format: prints to the standard output
* Return: counts
*/
int _printf(const char *format, ...)
{
	int i = 0;
	int counts = 0;
	va_list args;

	va_start(args, format);
	while (format[i])
	{
		while (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					counts += print_char(args);
					i += 2;
					break;
				case '%':
					_putchar('%');
					counts++;
					i += 2;
					break;
				case 's':
					counts += print_string(args);
					i += 2;
					break;
				default:
					_putchar(format[i]);
					_putchar(format[i + 1]);
					i += 2;
			}
		}
	if (format[i])
	{
	_putchar(format[i]);
	counts++;
	}
	i++;
	}
	va_end(args);
	return (counts);
}
