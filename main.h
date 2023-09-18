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
 * @fs: The specifier format
 * @fp: The func pointer.
 */
typedef struct fs
{
	char fs;
	int (*fp)(va_list, char[]);
}

int _printf(const char *format, ...);

int _handle(const char *fs, int *p_ind, va_list list, char b[], int wid);

/**
 * p_char - function for char
 * p_string: func to print string,
 * p_int : func to print number and
 * p_hexa : func to print hexaddecimal
 * @t: print type list
 * @b: - buffer list
 * Return: return func value
 */

int p_char(va_list t, char b[]);
int p_string(va_list t, char b[]);
int p_int(va_list t, char b[]);
int p_binary(va_list t, char b[]);
int p_unsigned(va_list t, char b[]);
int p_octal(va_list t, char b[]);
int p_hexadec(va_list t, char b[]);
int p_upperhexa(va_list t, char b[]);
int p_hex(va_list t, char m[], char b[]);
int p_percent(va_list types, char b[]);

int un_print(va_list t, char b[]);

/**
 * other func - function to print or return
 * @b: return b list
 * @t: return types list
 * Return: return value of func
 */
int _pointer(va_list t, char b[]);
int _width(const char *format, int *i, va_list list);
int _precision(const char *format, int *i, va_list list);
int _size(const char *format, int *i);
int _flags(const char *format, int *i);

int p_reverse(va_list t, char b[]);
int print_rot13string(va_list t, char b[]);


int write_char(char c, char b[]);

int is_print(char);
int append_hexa(char, char[], int);
int is_dig(char);

#endif /* MAIN_H */
