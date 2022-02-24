/*
** EPITECH PROJECT, 2021
** draw_map.c
** File description:
** BSQ
*/

#include <unistd.h>

void draw_map(char **map, int x, int y)
{
    for (int j = 0; j < y; j++) {
        write(1, map[j], x);
        write(1, "\n", 1);
    }
}
