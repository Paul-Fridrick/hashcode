/*
** EPITECH PROJECT, 2021
** my_getnbr
** File description:
** print a number given as a string param
*/

void my_putchar(char c);

int my_strlen(char const *str);

int my_getnbr(char const *str);

static int build_number(char c, int n);

int my_getnbr(char const *str)
{
    int size = my_strlen(str);
    int neg_count = 0;
    int n = 0;
    int mod = 0;
    char c;

    for (int i = 0; i < size; i++) {
        c = str[i];
        if (c == '-' && mod == 0)
            neg_count++;
        else if (c >= 48 && c <= 57) {
            n = build_number(*(str + i), n);
            mod = 1;
        }
        else
            break;
    }
    if (neg_count % 2 != 0)
        n *= -1;
    return n;
}

static int build_number(char c, int n)
{
    n = n * 10 + (c - 48);
    return n;
}
