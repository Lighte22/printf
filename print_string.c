#include "main.h"
#include <stdio.h>
/**
* _puts -> print a string to the standard output
* @str: string parameter
* Return: count
*/
int _puts(char *str)
{
	int i = 0;


	while (str[i])
	{
		_putchar(str[i]);

		i++;
	}
	return (i);

}
/**
* print_string -> print string in a function
* @args: argument parameter
*
* Return: _puts function
*/
int print_string(va_list args)
{
	return (_puts(va_arg(args, char *)));
}

