/*
** EPITECH PROJECT, 2021
** my_putstr_unprintable.c
** File description:
** my_printf
*/

#include "../../include/my.h"

int my_putstr_unprintable(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 31 || str[i] >= 127) {
            my_putchar('\\');
            my_put_nbr_base(str[i], "01234567");
        } else {
            my_putchar(str[i]);
        }
    }
    return (0);
}
