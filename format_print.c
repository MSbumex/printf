#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _printf - function for print format
 * @format: string argument
 *
 * Return: return value  number of chars
 */
int _printf(const char *format, ...)
{
	va_list args;
	int length = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	length = _printf(format, args);
	va_end(args);
	return (length);
}
