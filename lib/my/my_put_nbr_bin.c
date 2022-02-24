/*
** EPITECH PROJECT, 2021
** my_put_nbr_bin.c
** File description:
** my_printf
*/

void my_putchar(char c);

int my_put_nbr_bin(int nb)
{
    int test = nb;

    if (test != 0) {
        my_putchar(0);
    }
    if (test < 0) {
        my_putchar('-');
        test = -test;
    }
    if (test > 0) {
        my_put_nbr_bin(test / 2);
        my_putchar((test % 2) + 48);
    }
    return (0);
}
