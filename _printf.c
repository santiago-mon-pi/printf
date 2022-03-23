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
    {
       return (-1); 
    }

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
                i += 2, bcount++;
                break;
            case 's':
                pstr = va_arg(args, char*);
                if (pstr == NULL)
                {
                    write(1, "(null)", 6);
                    i += 2, bcount += 6;
                    break;
                }
                write(1, pstr, )
                break;    
            default:
                break;
            }
        }
    }
}
