/*
** EPITECH PROJECT, 2021
** my_strcapitalize.c
** File description:
** my_str_capitalize.c
*/

char *my_strlowcase(char *str);

char *my_strcapitalize(char *str)
{
    int i = 0;

    my_strlowcase(str);
    if (str[i] < '0' || str[i] > '9' &&  str[i] < 'A' || str[i] > 'Z'){
        if (str[i] < 'a' || str[i] > 'z' && str[i] <= 'z' || str[i] >= 'a'){
            return (str);
        }
        i++;
    }
    return (str);
}
