/*
** EPITECH PROJECT, 2021
** Shells
** File description:
** free_array
*/

#include <stdio.h>
#include <stdlib.h>

void free_array(char **arg)
{
    for (int i = 0; arg[i] != NULL; i++)
        free(arg[i]);
    free(arg);
}