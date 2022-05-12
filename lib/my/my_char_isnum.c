/*
** EPITECH PROJECT, 2020
** char is num
** File description:
** check if the char passed is num or not
*/

int my_char_isnum(char const c)
{
    if (c >= 48 && c <= 57)
        return (1);
    else
        return (0);
}