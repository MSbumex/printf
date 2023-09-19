#include "main.h"
/**
* _flags -function to give  flags
* @format: Forma char
* @index: Pointer to format
*
* Return: return flags
*/
int _flags(const char *format, int *index)
{
	int flags = 0;
	int curr_index;
	const char f_char[] = {'-', '+', '0', '#', ' ', '\0'};
	const int f_array[] = {F_MINUS, F_PLUS, F_ZERO, F_HASH, F_SPACE, 0};

	for (curr_index = *index + 1; format[curr_index] != '\0'; curr_index++)
	{
		for (int f = 0; f_char[j] != '\0'; f++)
		{
			if (format[curr_index] == f_char[f])
			{
				flags |= f_char[f];
				break;
			}
		}
		if (f_char[f] == '\0')
		{
			break;
		}
	}
	*index = curr_index - 1;
	return (flags);
}
