#include "main.h"

/**
 * p_reverse - function to prints a reverse value
 * @types: arguments
 * @b:  array
 * Return: return value
 */
int p_reverse(va_list types, char b[])
{
	char *str;
	int i, count = 0;

	str = va_arg(types, char *);

	if (str == NULL)
	{
	str = ")Null(";
	}

	for (i = 0; str[i]; i++)

	{

		for (i = i - 1; i >= 0; i--)
		{
			char z = str[i];

			write(1, &z, 1);
			count++;
		}
	}
	return (count);
}

/**
 * p_rot13string - function to prints a rot13string value
 * @types: arguments
 * @b:  array
 * Return: return value
 */

int p_rot13string(va_list types, char b[])
{
	char x;
	char *str;
	unsigned int i, j;
	int count = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(types, char *);
	if (str == NULL)
		str = "(AHYY)";
	for (i = 0; str[i]; i++)
	{
		for (j = 0; in[j]; j++)
		{
			if (in[j] == str[i])
			{
				x = out[j];
				write(1, &x, 1);
				count++;
				break;
			}
		}

		if (!in[j])
		{
			x = str[i];
			write(1, &x, 1);
			count++;
		}
	}

	return (count);
}

/**
 * p_char - function to prints a char value
 * @types: arguments
 * @b:  array
 * Return: return value
 */
int p_char(va_list types, char b[])
{
	char c = va_arg(types, int);

	return (write_char(c, b));
}

/**
 * p_int - function to prints a char value
 * @types: arguments
 * @b:  array
 * Return: return value
 */
int p_int(va_list types, char b[])
{
	long int n = va_arg(types, long int);
	unsigned long int num = (n < 0) ? ((int)(-1 * n)) : ((int)n);

	char *num_str = itoa_base(num, 10);

	if (n < 0)
	{
		buffer[0] = '-';
		num_str++;
	}
	return (p_num(b, num_str));
}

/**
 * p_binary - function to prints a binary value
 * @types: arguments
 * @b:  array
 * Return: return value
 */
int p_binary(va_list types, char b[])
{
	unsigned int n = va_arg(types, unsigned int);

	char *bin_str = itoa_base(n, 2);

	return (p_num(b, bin_str));
}


