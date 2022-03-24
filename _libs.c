#include "main.h"

/**
 * _len - print the length of the string
 * @str: string
 *
 * Return: length of char
 */

int _len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	};
	return (i);
}

/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints a string
 * @str: runs through the string
 *
 **/

void _puts(char *str)
{
	int i;

	for  (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
}

/**
 * case_c - character identifier
 * @charp: input character
 * @c_list: variable list
 * @i: indexes string
 * @bcount: bytes counter
 */
void case_c(char charp, va_list c_list, unsigned int *i, unsigned int *bcount)
{
	char c;
	char *pstr;

	switch (charp)
	{
		case 'c':
			c = va_arg(c_list, int);
			_putchar(c);
			*i += 2, *bcount++;
			break;
		case 's':
			pstr = va_arg(c_list, char*);
			if (pstr == NULL)
			{
				pstr = "(null)";
			}
			_puts(pstr);
			*i += 2, *bcount += _len(pstr);
			break;
		case '%':
			_putchar('%');
			*i += 2, *bcount += 1;
			break;
	}
}
