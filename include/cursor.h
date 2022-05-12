/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** cursor
*/

#ifndef CURSOR_H_
#define CURSOR_H_

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include "sprite.h"

typedef struct cursor_s {
    sprite_t sprite;
    sfVector2i pos;
    sfTexture *text_cross;
}cursor_t;


#endif /* !CURSOR_H_ */