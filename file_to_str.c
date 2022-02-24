/*
** EPITECH PROJECT, 2022
** file_to_str.c
** File description:
** file_to_str.c
*/

#include "../include/my.h"

size_t size(const char *buffer)
{
    struct stat size;

    if (stat(buffer, &size) != 0)
        return (0);

    return (size.st_size);
}

char *file_to_str(const char *filepath)
{
    int file = open(filepath, O_RDONLY);
    char *res = malloc(size(filepath) + 1);

    read(file, res, size(filepath));
    res[size(filepath)] = '\0';
    close(file);

    return (res);
}
