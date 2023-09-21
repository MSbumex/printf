#include "main.h"

/**
 * p_unsigned - func to print unsigned
 * @types: arguments
 * @b: array of buffer
 * Return: print number of chars
 */
int p_unsigned(va_list types, char b[])
{
	int i = BUFF_SIZE - 2;

	unsigned long int num = va_arg(types, int);

	num = size_num(num, size);
	if (num == 0)
	{
		b[i--] = '0';
		b[BUFF_SIZE - 1] = '\0';
	}
	while (num > 0)
	{
		b[i--] = (num % 10) + '0';
		num /= 10;
	}
	i++;
	return (_write(0, i, b));
}
/**
 * p_octal - function to print octal
 * @types: arguments
 * @b: array of buffer
 * Return: print number of chars
*/
int p_octal(va_list types, char b[])
{
	int i = BUFF_SIZE - 2;
	unsigned int num = va_arg(types,  int);
	unsigned int init_num = num;

	num = size_unsign(num, size);

	if (num == 0)
		b[i--] = '0';
		b[BUFF_SIZE - 1] = '\0';
	while (num > 0)
	{
		b[i--] = (num % 8) + '0';
		num /= 8;
	}
	if (init_num != 0)
		b[i--] = '0'
			i++;
	return (_write(0, i, b));
}
/**
 * p_hexadec - func to print hexa decimal
 * @types: arguments
 * @b: array of buffer
 * Return: print number of chars and hexadecimal
*/
int p_hexadec(va_list types, char b[])
{
	return (p_hex(types, "0123456789abcdef", b, 'x'));
}

/**
 * p_upperhexa- func to prints an upper hexadecima
 * @types: arguments
 * @b:array to handle print
 * Return: return and print char upper note
 */

int p_upperhexa(va_list types, char b[])
{
	return (p_hex(types, "0123456789ABCDEF", b,  'X'));
}

/**
 *  p_hex - func to prints an hexa
 * @types: arguments
 * @b:array to handle print
 * @map_to: to map
 * Return: return and print char hexa
 */
int p_hex(va_list types, char map_to[], char b[])
{
	int i = BUFF_SIZE - 2;
	unsigned long int num = va_arg(types, unsigned long int);
	unsigned long int init_num = num;

	num = size_unsign(num, size);
	if (num == 0)
	b[i--] = '0';
	b[BUFF_SIZE - 1] = '\0';
	while (num > 0)
	{
		b[i--] = map_to[num % 16];
		num /= 16;
	}
	if (init_num != 0)
	{
		b[i--] = '0';
	}
	i++;
	return (_write(0, i, b));
}


}

