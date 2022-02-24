/*
** EPITECH PROJECT, 2021
** my_is_prime.c
** File description:
** my_is_prime.c
*/

int my_is_prime(int nb)
{
    int res = 0;
    int i;

    for (i = 2; i < nb; i++) {

        if (nb % i == 0) {
            res++;
        }
    }
    if (res == 1) {
        return (1);
    }
    return (0);
}
