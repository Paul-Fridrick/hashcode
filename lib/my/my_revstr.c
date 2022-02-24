/*
** EPITECH PROJECT, 2021
** my_revstr.c
** File description:
** my_revstr.c
*/

int my_strlen(char *str);

char my_revstr(char *str)
{
    char temp;
    int f = 0;
    int len = my_strlen(str) - 1;

    while (f <= len) {
        temp = str[f];
        str[f] = str[len];
        str[len] = temp;
        f++;
        len--;
    }
    return (*str);
}
