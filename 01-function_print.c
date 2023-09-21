#include "main.h"
#include <stdlib.h>

/**
  * print_format - function to prints
  * @format: format argument
  * @args: arguments list
  *
  * Return: The length of the format
  */

int print_format(const char *format, va_list args)
{
	int count = 0;
	int i = 0;

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			i++;

			while (format[i] == ' ')
				i++;

			if (format[i] == '%')
				count += print_write(format[i]);

			if (char_validate(format[i]) == 0)
			{
				count = invalid_spec(format[i - 1], format[i], count);
			}
			else
			{
				count += specifier(format[i], args);
			}
		}
		else
		{
			count += format_write(format[i]);
		}

		i++;
	}

	return (count);
}

/**
  * specifier - function to  prints  specifier
  * @format: format to print
  * @args:  arguments list
  *
  * Return: return specifier
  */
int specifier(char format, va_list args)
{
	int i  = 0, length = 0;
	spc_dt _types[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{"b", print_binary},
		{NULL, NULL}
	};

	while (_types[i].fs)
	{
		if (*_types[i].fs == format)
			length = _types[i].fp(args);

		i++;
	}

	return (length);
}

/**
  * invalid_spec - Prints a invalid specifier
  * @prev_format: argument previous specifier
  * @format: format specifier
  * @count: count before prints invalid
  *
  * Return: return count after prints invalid
  */
int invalid_spec(char prev_format, char format, int count)
{
	count += _write('%');

	if (prev_format == ' ')
	{
		count += format_write(' ');
		count += format_write(format);
	}
	else
	{
		count += format_write(format);
	}

	return (count);
}

/**
  * char_validate - function to  validate char
  * @_type: caharacter type
  *
  * Return: return 1 for char type
  */
int char_validate(char _type)
{
	char _types[] = {'c', 's', 'd', 'i', 'b', '%'};
	int i = 0;

	while (_types[i])
	{
		if (_types[i] == _type)
			return (1);
		i++;
	}
	return (0);
}

/**
  * print_str - function prints string
  * @args: list arguments
  *
  * Return: return string
  */
int print_str(va_list args)
{
	char *arg = va_arg(args, char *);
	int i = 0;

	if (arg != NULL)
	{
		while (arg[i])
		{
			format_write(arg[i]);
			i++;
		}

		return (i);
	}

	format_write('(');
	format_write('n');
	format_write('u');
	format_write('l');
	format_write('l');
	format_write(')');
	return (6);
}
