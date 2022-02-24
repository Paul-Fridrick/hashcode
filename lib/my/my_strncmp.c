/*
** EPITECH PROJECT, 2021
** my_strncmp.c
** File description:
** my_strncmp.c
*/

int my_strlen(char const *str);

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    int s = 0;

    if (my_strlen(s1) < my_strlen(s2))
        return (my_strlen(s1) - n - my_strlen(s2));
    else if (my_strlen(s1) > my_strlen(s2))
        return (my_strlen(s2) - n) - my_strlen(s1);

    for (i; s1[i] != '\0' && s2[i] != '\0';i++) {
        if (s1[i] < s2[i])
            s--;
            else if (s1[i] > s2[i])
            s++;
    }
    return (s);
}
