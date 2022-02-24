/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** e
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    long test = nb;

    if (test == 0) {
        my_putchar(0);
    }
    if (test < 0) {
        my_putchar('-');
        test = -test;
    }
    if (test > 9)
        my_put_nbr(test / 10);
    my_putchar((test % 10) + 48);

    return (0);
}
