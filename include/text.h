/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** text
*/

#ifndef TEXT_H_
#define TEXT_H_

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <stdlib.h>

typedef struct text
{
    sfText *text;
    sfFont *font;
}text_t;

#endif /* !TEXT_H_ */
