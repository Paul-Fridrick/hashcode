/*
** EPITECH PROJECT, 2021
** my_put_unsigned_nbr.c
** File description:
** my_printf
*/

#include "../../include/my.h"

unsigned my_put_nb_unsigned(unsigned int nb)
{
    unsigned int res;

    if (nb > 9) {
        my_put_nb_unsigned(nb / 10);
    }
    res = nb % 10 + 48;
    my_putchar(res);
    return (res);
}
