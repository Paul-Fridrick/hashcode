/*
** EPITECH PROJECT, 2021
** my_sort_int_array.c
** File description:
** my_sort_int_array.c
*/

void my_sort_int_array(int *tab, int size)
{
    int i = 0;
    int temp = 0;

    while (i < size - 1) {
        if (tab[i + 1] < tab[i]) {
            temp  = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i = 0;
        } else {
            i++;
        }
    }
}
