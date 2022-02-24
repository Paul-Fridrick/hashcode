/*
** EPITECH PROJECT, 2021
** my_isneg.c
** File description:
** my_isneg.C
*/

void my_putchar(char c);

int my_isneg(int h)
{
    if (h < 0) {
        my_putchar('N');
    } else {
        my_putchar('P');
    }
    my_putchar('\n');
    return 0;
}
