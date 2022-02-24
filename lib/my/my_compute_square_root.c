/*
** EPITECH PROJECT, 2021
** my_compute_square_root.c
** File description:
** my_compute_square_root.c
*/

int my_compute_square_root(int nb)
{
    int c = nb;

    while (c > 0){
        if (c * c  == nb) {
            return (c);
        }
        c--;
        if (c > 46340) {
            return (0);
        }
    }
    return (0);
}
