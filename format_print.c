#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * format_print - function for print format
 * @format: string argument
 *
 * Return: return value  number of chars
 */
int format_print(const char *format, ...)
{
	va_list args;
	int length = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	length = format_print(format, args);
	va_end(args);
	return (length);
}
