/*
** EPITECH PROJECT, 2021
** my_put_long.C
** File description:
** my_printf
*/

void my_putchar(char c);

long my_put_long(long nb)
{
    long test = nb;

    if (test == 0) {
        my_putchar(0);
    }
    if (test < 0) {
        my_putchar('-');
        test = test * -1;
    }
    if (test > 9) {
        my_put_long(test / 10);
        my_putchar((test % 10) + 48);
    }
    return (0);
}
