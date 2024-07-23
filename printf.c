#include "main.h"
#include <stdio.h>
#include <stdarg.h>
int _printf(const char *format, ...)
{
        va_list args;
        int i = 0, j = 0, len = 0;
        char *tmp;
        va_start(args,format);
        if (format)
        {
                while (format[i])
                {
                        if (format[i] == '%' && format[i + 1] == 'c')
                        {
                                _putchar(va_arg(args, int));
                                len++;
                                i = i + 2;
                        }
                        else if (format[i] == '%' && format[i + 1] == 's')
                        {
                                tmp = va_arg(args, char*);
                                j = 0;
                                if (tmp == NULL)
                                {
                                        tmp = "(null)";
                                }
                                while (tmp[j])
                                {
                                        _putchar(tmp[j]);
                                        j++;
                                }
                                len = len + j;
                                i = i + 2;
                        }
                        else if (format[i] == '%' && format[i + 1] == '%')
                        {
                                _putchar('%');
                                len++;
                                i = i + 2;
                        }
			else if (format[i] == '%' && format[i + 1] == '\0')
			{
				return (-1);
			}
			else
                        {
                                _putchar(format[i]);
                                i++;
                                len++;
                        }
                }
        }
        va_end(args);
        return (len);
}
