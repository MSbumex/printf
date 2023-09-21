#include <unistd.h>

/**
 * format_write - function to writes the char
 * @c: argument character
 *
 * Return: return value 1 if success. On error, -1 is returned
 */
int format_write(char c)
{
	return (write(1, &c, 1));
}
