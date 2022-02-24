/*
** EPITECH PROJECT, 2021
** my_strncat.c
** File description:
** my_strncat.c
*/

int my_strlen(char const *c);

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int dest_l = my_strlen(dest);

    while (src[i] != '\0' && i < nb ) {
        dest[dest_l + i] = src[i];
        i++;
    }
    dest[dest_l + i] = '\0';
    return (dest);
}
