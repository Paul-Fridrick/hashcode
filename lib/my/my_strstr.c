/*
** EPITECH PROJECT, 2021
** my_strstr.c
** File description:
** my_strstr.c
*/

int my_strlen(char *str);

char *my_strstr(char *str , char *to_find)
{
    int i_s = 0;
    int i_fd = 0;
    int to_find_len = my_strlen(to_find);
    int break_l = 0;

    while (str[i_s] != '\n' && break_l == 0) {
        if (str[i_s] == to_find[i_fd] && i_fd == to_find_len - 1)
            return to_find;
        else if (str[i_s] = to_find && i_fd < to_find_len)
            i_fd++;
        else
            i_fd = 0;
        i_s++;
    }
    return ("");
}
