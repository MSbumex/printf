#include "main.h"


/**
 * p_buf - func to print to buffer content
 * @b: buffer array
 * @b_ind: buffer Index at which to add the next char, re
 */

void p_buf(char b[], int *b_ind)
{
	if (*b_ind > 0)
	{
		write(1, &b[0], *b_ind);
		*b_ind = 0;
	}
}

/**
 * _printf - format print function
 * @format: string
 * Return: char
 */
int _printf(const char *format, ...)
{
	if (format == NULL)
		return (-1);

	int _char = 0;

	b_ind = 0;
	va_list list;
	char b[BUFF_SIZE];

	_start(list, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			b[b_ind++] = format[i];
			if (b_ind == BUFF_SIZE)
			p_buf(b, &b_ind);
			_chars++;
		}
		else
		{
			p_buf(b, &b_ind);
			i++;
		}
	}

	p_buf(b, &buff_ind);
	_end(list);

	return (_chars);
}

