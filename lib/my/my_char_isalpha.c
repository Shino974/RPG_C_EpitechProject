/*
** EPITECH PROJECT, 2020
** check char is alpha
** File description:
** check if my character is alpha
*/

int my_char_isalpha(char const c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    else
        return (0);
}