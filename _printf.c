#include "main.h"
/**
 * _printf - function to print anything!
 * @format: string to print
 * Return: byte count
*/
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0;
	int bcount = 0;
	char charp;

	va_start(args, format);

	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			charp = format[i + 1];
			if (charp == '\0')
				return (-1);
			else if (charp == 'c' || charp == 's' || charp == '%' ||
				 charp == 'i' || charp == 'd')
				case_c(charp, args, &i, &bcount);
			else
			{
				_putchar(format[i]);
				i++, bcount++;
			}
		}
		else
		{
			_putchar(format[i]);
			i++, bcount++;
		}
	};
	va_end(args);
	return (bcount);
}
