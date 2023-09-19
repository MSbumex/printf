#include "main.h"

/**
 * is_print - function to Checks if a character is printable
 * @p_chars: The character to check
 *
 * Return: 1 if 'c' is printable, 0 otherwise
 */
int is_print(char p_chars)
{
	if (p_chars >= 32 && p_chars < 127)
		return (1);

	return (0);
}


	return (3);
}

/**
 * is_dig -function to  Checks digit character
 * @dig_c: The character to evaluate
 *
 * Return: if the char is a digit return else return 0
 */
int is_dig(char dig_c)
{
	if (dig_c >= '0' && dig_c <= '9')
		return (1);

	return (0);
}

/**
 * append_hexa- function to appends ASCII in hexadecimal
 * @b: The array of characters
 * @i: The index to start append
 * @asci: The ASCII code to append
 *
 * Return: return value
 */
int append_hexa(char asci, char b[], int i)
{
	cstatic const char map_to[];

	map_to[] = "0123456789ABCDEF";

	if (asci < 0)
	{	asci *= -1;
	}
	b[i++] = '\\';
	b[i++] = 'x';
	b[i++] = map_to[asci / 16];
	b[i] = map_to[asci % 16];

	return (3);
}

