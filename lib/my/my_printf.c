/*
** EPITECH PROJECT, 2021
** my_printf.c
** File description:
** my_printf.c
*/

#include "../../include/my.h"
#include <stdarg.h>

char *check_int(char *str, va_list ar, int i)
{
    if (str[i] == 'd' || str[i] == 'i')
        my_put_nbr(va_arg(ar, int));
    if (str[i] == 'u')
        my_put_nb_unsigned(va_arg(ar, int));
    if (str[i] == 'l' && str[i + 1] == 'd' || str[i + 1] == 'i')
        my_put_long(va_arg(ar, long));
    if (str[i] == '+' && str[i + 1] == 'd' || str[i + 1] == 'i') {
        my_putchar('+');
        my_put_nbr(va_arg(ar, int));
        }
}

char *check_base(char *str, va_list ar, int i)
{
    if (str[i] == 'x')
        my_put_nbr_base(va_arg(ar, int), "0123456789abcdef");
    if (str[i] == 'X')
        my_put_nbr_base(va_arg(ar, int), "0123456789ABCDEF");
    if (str[i] == 'o')
        my_put_nbr_base(va_arg(ar, int), "01234567");
    if (str[i] == 'b')
        my_put_nbr_base(va_arg(ar, int), "01");

    check_int(str, ar, i);
}

char *check_type(char *str, va_list ar, int i)
{
    if (str[i] == 'c')
        my_putchar(va_arg(ar, int));
    if (str[i] == 's')
        my_putstr(va_arg(ar, char *));
    if (str[i] == '#' && str[i + 1] == 'x' || str[i + 1] == 'X' \
    || str[i + 1] == 'o') {
        if (str[i + 1] == 'o') {
            my_put_nbr(0);
            my_put_nbr_base(va_arg(ar, int), "01234567");
        } else {
            my_putstr("0x");
            my_put_nbr_base(va_arg(ar, int), "0123456789abcdef");
        }
    }
    if (str[i] == '%')
        my_putchar('%');
    if (str[i] == 'S')
        my_putstr_unprintable(va_arg(ar, char *));
    check_base(str, ar, i);
}

void my_printf(char *str, ...)
{
    va_list args;
    int i = 0;
    va_start(args, *str);
    while (str[i] != '\0') {
        if (str[i] == '%') {
            i++;
            check_type(str, args, i);
        } else {
            my_putchar(str[i]);
        }
        i++;
    }
    va_end(args);
}
