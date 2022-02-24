/*
** EPITECH PROJECT, 2022
** hash.c
** File description:
** hash.c
*/

#include "include/hash.h"

int line_lenght(char *str, int i)
{
    int res = 0;

    while (str[i] != '\n' || str[i] != '\0') {
        i++;
        res++;
    }

    return res;
}

int is_project(char *str, int i)
{
    int check = 0;

    while (str[i] != '\n') {
        if (str[i] >= '0' && str[i] <= '9')
            check++;
        i++;
    }

    if (check > 1)
        return 1;
    return 0;
}

projet_t find_project(const char *filepath)
{
    projet_t projet;
    int i = 0;
    char *str = file_to_str(filepath);

    while (str[i] != '\0') {
        if (is_project(str, i)) {
            project_info(&projet, str, i);
            i += line_lenght(str, i);
        }
    }
}

char *hashcode(const char *filepath)
{
    info_t info;
    int i = 0;
    int y = 0;
    char *temp = malloc(sizeof(char) * 10);
    char *str = file_to_str(filepath);

    while (str[i] != '\n') {
        while (str[i] != ' ') {
            temp[y] = str[i];
            i++;
            y++;
        }
        temp[y] = '\0';
        info.nb_dev = atoi(temp);
        y = 0;
        i++;
        while (str[i] != '\n') {
            temp[y] = str[i];
            y++;
            i++;
        }
        temp[y] = '\0';
        info.nb_projets = atoi(temp);
    }
    
    while (str[i] != '\0') {

    }
}