#include "main.h"

/**
 * _handle - function to prints an argument of diff type
 * @fs: format specifier
 * @p_ind: index in fmt.
 * @list: list of arg.
 * @b: Buffer array to handle print.
 * @wid: format specifier width
 * fc: format conver
 * fc_typ: format conver specfier
 * Return: Number of chars.
 */
int _handle(const char *fs, int *p_ind, va_list list, char b[], int wid);
{
	int _pchar = -1; i, un_len = 0

	fc fc_typ[] = {
		{'c', p_char}, {'s', p_string}, {'%', p_percent},
		{'i', p_int}, {'d', p_int}, {'b', print_binary},
		{'u', p_unsigned}, {'o', p_octal}, {'x', p_hexadex},
		{'X', p_upperhexa}, {'p', _pointer}, {'S', un_print},
		{'r', p_reverse}, {'R', p_rot13string}, {'\0', NULL}
	};

	for (int i = 0; fc_ty[i].fc != '\0'; i++)
	{
		if (fc[*p_ind] == fc_typ[i].fc)
		{
			return (fc_typ[i].fp(list, b, wid));
		}
	}

	if (fc_typ[i].fc == '\0')
	{
		if (fc[*p_ind] == '\0')
		{
			return (-1);
		}
	int un_len = 0;

	un_len += putchar('%');

	if (fc[*p_ind - 1] == ' ')
	{
		un_len += putchar(' ');
	}
	else if (wid)
	i{
		(*p_ind)--;
		while (fc[*p_ind] != ' ' && fc[*p_ind] != '%')
		{
			(*p_ind)--;
		}
		if (fc[*p_ind] == ' ')
		{
			(*p_ind)--;
		}
		return (1);
	}
	un_len += putchar(&fc[*p_ind]);
	return (un_len);
	}

	return (p_char);
}

