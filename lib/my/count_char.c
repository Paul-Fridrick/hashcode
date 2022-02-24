/*
** EPITECH PROJECT, 2021
** count_char.c
** File description:
** count_char.c
*/

int check_nonalpha(char const *str, int i);

int count_char(char const *str, int i)
{
    int res = 0;

    while (check_nonalpha(str, i) == 1){
        i++;
    }
    while (check_nonalpha(str, i) != 1){
        res += 1;
        i++;
    }
    return res;
}
