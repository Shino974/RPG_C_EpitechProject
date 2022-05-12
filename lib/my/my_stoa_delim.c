/*
** EPITECH PROJECT, 2021
** Bootstrap
** File description:
** my_stoa_delim
*/

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

int my_char_isalpha(char c);

int count_nb_words(char const *str, char delimiter)
{
    int nb = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == delimiter)
            nb++;
    }
    nb = nb + 1;
    return nb;
}

int my_strlen_delim(char const *str, char delimiter)
{
    int i = 0;

    while (str[i] != '\0' && str[i] != delimiter)
        i++;
    return (i);
}

char **my_stoa_delim(char const *str, char delimiter)
{
    int nb = count_nb_words(str, delimiter);
    char **array = malloc(sizeof(char *) * (nb + 1));
    int count = 0;

    for (int i = 0, j = 0; str[i] != '\0'; i++, j++) {
        count = my_strlen_delim(&str[i], delimiter);
        array[j] = malloc(sizeof(char) * (count + 1));
        for (int e = 0; str[i] != '\0' && str[i] != delimiter; i++, e++)
            array[j][e] = str[i];
        array[j][count] = '\0';
        i = (str[i] == '\0') ? i - 1: i;
    }
    array[nb] = NULL;
    return array;
}