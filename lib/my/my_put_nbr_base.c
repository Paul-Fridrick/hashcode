/*
** EPITECH PROJECT, 2021
** my_put_nbr_base.c
** File description:
** my_printf
*/

#include "../../include/my.h"

int my_put_nbr_base(int nb, char const *base)
{
    int size = my_strlen(base);
    int pow = 1;
    int res = 0;
    while ((nb / pow) > size) {
        pow = pow * size;
    }
    while (pow > 0) {
        res = (nb / pow) % size;
        my_putchar(base[res]);
        pow = pow / size;
    }
    if (nb == -1) {
        my_putstr("FFFFFFFF");
        return (0);
    }
    if (nb < 0) {
        my_putchar('-');
        nb == nb * -1;
    }
    return (1);
}
