#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_binary - function to prints binary integer
  * @args: arguments list
  * Return: return print digit value
  */
int print_binary(va_list args)
{
	unsigned int x = 0;
	int b = 0, new = 0;

	new = va_arg(args, int);
	x = new;
	if (new < 0)
	{
		format_write('1');
		new = new * -1;
		x = new;
		b += 1;
	}
	while (x > 0)
	{
		x = x / 2;
		b++;
	}
	print_recursbinary(new);
	return (b);
}

/**
  * print_recursbinary -function to prints a recusive  binary
  * @a: integer
  *
  * Return: return value
  */
void print_recursbinary(int a)
{
	unsigned int t;

	t = a;
	if (t / 2)
		print_recursbinary(t / 2);
	format_write(t % 2 + '0');
}

/**
  * print_int- function prints a integer
  * @args: arguments list
  *
  * Return: return value
  */
int print_int(va_list args)
{
	int count = 1, m = 0;
	unsigned int n = 0;

	n = va_arg(args, int);
	m = n;
	if (m < 0)
	{
		format_write('-');
		m = m * -1;
		n = m;
		count += 1;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}

	print_recursint(m);
	return (count);
}

/**
  * print_recursint - function to prints a recursive integer
  * @a: integer
  * Return: retrun value nothing
  */
void print_recursint(int a)
{
	unsigned int t;

	t = a;
	if (t / 10)
		print_recursint(t / 10);
	format_write(t % 10 + '0');
}

/**
  * print_char - function to prints a char
  * @args: arguments list
  * Return: The length of the character
  */
int print_char(va_list args)
{
	format_write(va_arg(args, int));
	return (1);
}
