/*
** EPITECH PROJECT, 2021
** my_str_isprintable.c
** File description:
** my_str_isprintable.C
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < '!')
            return (0);
        i++;
    }
    return (1);
}
