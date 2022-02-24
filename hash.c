/*
** EPITECH PROJECT, 2022
** hash.c
** File description:
** hash.c
*/

#include "include/hash.h"

int line_lenght(char *str, int a)
{
    int i = a;
    int res = 0;

    while (str[i] != '\n' && str[i] != '\0') {
        i++;
        res++;
    }
    return res + 1;
}

int nb_lenght(char *str, int i)
{
    int res = 0;

    while (str[i] >= '0' && str[i] <= '9') {
        res++;
        i++;
    }

    printf("%d\n", res);
    return res;
}

int is_project(char *str, int i)
{
    int check = 0;

    while (str[i] != '\n') {
        if (str[i] >= '0' && str[i] <= '9') {
            check++;
            i += nb_lenght(str, i);
        }
        i++;
    }
    if (check > 1)
        return 1;
    return 0;
}

void project_info(projet_t *projet, char *str, int i)
{
    char *temp = NULL;
    temp = malloc(sizeof(char *));
    int y = 0;

        while (str[i] != ' ') {
            temp[y] = str[i];
            y++;
            i++;
        }
        i++;
        projet->name = temp;
        temp = NULL;
        temp = malloc(sizeof(char*));
        y = 0;
        while (str[i] != ' ') {
            temp[y] = str[i];
            y++;
            i++;
        }
        i++;
        projet->nb_day = atoi(temp);
        temp = NULL;
        temp = malloc(sizeof(char*));
        y = 0;
        while (str[i] != ' ')
            i++;
        i++;
        while (str[i] != ' ') 
            i++;
        i++;
        y = 0;
        while (str[i] != ' ' && str[i] != '\n') {
            temp[y] = str[i];
            y++;
            i++;
        }
        projet->ask_dev = atoi(temp);
    
    printf("%s %d %d\n", projet->name, projet->nb_day, projet->ask_dev);
    projet->next = projet;
}

projet_t find_project(const char *filepath, int i)
{
    projet_t projet;
    char *str = file_to_str(filepath);

    while (str[i] != '\0') {
        if (is_project(str, i)) {
            project_info(&projet, str, i);
            i += line_lenght(str, i);
        }
        i += line_lenght(str, i);
    }
    return projet;
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
    
    info.projet = find_project(filepath, i + 1);
}