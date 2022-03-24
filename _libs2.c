#include "main.h"

/**
 *print_number - prints number positive or negative
 *
 */

void print_number(int n)
{
	unsigned int mid;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	mid = n;
	if (mid / 10)
	{
		print_number(mid / 10);
	}
	_putchar(mid % 10 + '0');
}
int print_int(va_list i_list)
{
	int c, duplicate, d_count = 0;

	c = va_arg(i_list, int);
	duplicate = c;


	if (c == 0)
	{
		d_count = 1;
		print_number(c);
	}
	else
	{
		print_number(c);
		while (c != 0)
		{
			c = c / 10;
			d_count++;
		}
		if (duplicate < 0)
			return (d_count + 1);
	}
}
