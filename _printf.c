#include "main.h"
/**
*
*
*
*/

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, bcount = 0;
	char *pstr, charc, charp;

	va_start(args, format);

	if (format == NULL)
		return (-1);
	for (; format[i] != '\0'; i++, bcount++)
	{
		if (format[i] == '%')
		{
			charp = format[i + 1];
			switch (charp)
			{
			case 'c':
				charc = va_arg(args, int);
				_putchar(charc);
				+= 2, bcount++;
				break;
			case 's':
				pstr = va_arg(args, char*);
				if (pstr == NULL)
				{
					write(1, "(null)", 6);
					i += 2, bcount += 6;
					break;
				}
				write(1, pstr, _len(pstr));
				i += 2, bcount += _len(pstr);
				break;
			case '%':
				_putchar('%');
				i += 2, bcount++;
				break;
			default:
				if (charp == NULL)
					return (-1);
				else if ((charp < 65) || (charp > 90)
					 && (charp < 97) || (charp < 123))
				{
					_putchar('%');
					bcount += 1, i += 1;
				}
				i += 2;
				break;
			};
		};
		if (charp != '\0' && charp != '%')
			_putchar(format[i]);
	};
	va_end(args);
	return (bcount);
}
