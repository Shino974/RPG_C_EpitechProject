/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** buttons
*/

#ifndef BUTTONS_H_
#define BUTTONS_H_

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include "sprite.h"

typedef struct buttons {
    sprite_t *model;
    char *name;
    sfVector2f pos;
    sfVector2f scale;
}buttons_t;

#endif /* !BUTTONS_H_ */
