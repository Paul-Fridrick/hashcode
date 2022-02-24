/*
** EPITECH PROJECT, 2021
** free_map.c
** File description:
** BSQ
*/

#include <stdlib.h>

void free_tab(unsigned char **tab, int height)
{
    for (int i = 0; i < height; i++)
        free(tab[i]);
    free(tab);
}
