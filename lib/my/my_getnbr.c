/*
** EPITECH PROJECT, 2020
** get number
** File description:
** Stock number given by a string
*/

#include <stdio.h>
#include <stdint.h>

int my_char_isalpha(char const c);

int my_char_isnum(char const c);

int counting_minus(char const *str, int *i)
{
    int count_minus = 0;

    while (str[*i] != '\0' && my_char_isnum(str[*i]) == 0) {
        if (str[*i] == '-')
            count_minus = count_minus + 1;
        if (my_char_isalpha(str[*i]) == 1)
            return (-2);
        *i = *i + 1;
    }
    if (count_minus % 2 == 1)
        return (-1);
    return (1);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int count_minus = counting_minus(str, &i);
    int result = 0;

    if (count_minus == -2)
        return (0);
    while (str[i] != '\0') {
        if (my_char_isnum(str[i]) == 1)
            result = str[i] - 48 + (result * 10);
        else
            return result * count_minus;
        i = i + 1;
    }
    return (result * count_minus);
}

int64_t counting_minus_tol(char const *str, int64_t *i)
{
    int64_t count_minus = 0;

    while (str[*i] != '\0' && my_char_isnum(str[*i]) == 0) {
        if (str[*i] == '-')
            count_minus = count_minus + 1;
        if (my_char_isalpha(str[*i]) == 1)
            return (-2);
        *i = *i + 1;
    }
    if (count_minus % 2 == 1)
        return (-1);
    return (1);
}

int64_t get_tol(char *str)
{
    int64_t i = 0;
    int64_t count_minus = counting_minus_tol(str, &i);
    int64_t result = 0;

    if (count_minus == -2)
        return (0);
    while (str[i] != '\0') {
        if (my_char_isnum(str[i]) == 1)
            result = str[i] - 48 + (result * 10);
        else
            return result * count_minus;
        i = i + 1;
    }
    return (result * count_minus);
}