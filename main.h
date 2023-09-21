#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>

#define BUFF_SIZE 1024
#define _HASH 8
#define _SPACE 16

/**
 * struct fs - Struct fs
 *
 * @fs: The format conversion pointer
 * @fp: The func pointer.
 */
typedef struct fs
{
	char *fs;

	int (*fp)(va_list args);
} fs_t;

int format_write(char c);
int format_print(const char *format, ...);
int print_char(va_list args);
int print_str(va_list args);
int format_print2(const char *format, va_list args);
int specifier(char format, va_list args);
int invalid_spec(char prev_format, char format, int count);
int print_int(va_list args);
void print_recursint(int a);
int print_binary(va_list args);
void print_recursbinary(int a);
int char_validate(char _type);

#endif /* MAIN_H */
