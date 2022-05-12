/*
** EPITECH PROJECT, 2020
** B-PSU-100-RUN-1-1-myprintf-ludovic.hou
** File description:
** my_getstr
*/

#include "rpg.h"

char *my_getstr(int nb, char *str)
{
    int i = 0;
    int test = 0;
    int div = 10;
    int for_mall = 1;

    while (nb / div != 0) {
        div = div * 10;
        for_mall++;
    }
    str = malloc(sizeof(char) * (for_mall + 1));
    div = div / 10;
    while (test != nb) {
        test = nb / div;
        div = div / 10;
        str[i] = (test % 10) + 48;
        i++;
    }
    str[i] = '\0';
    return str;
}