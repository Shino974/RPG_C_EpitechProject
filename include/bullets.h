/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** bullets
*/

#ifndef BULLETS_H_
#define BULLETS_H_

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include "sprite.h"

typedef struct bullets {
    sfSprite *sprite;
    sfTexture *text;
    int damage;
    int shot;
}bullets_t;

#endif /* !BULLETS_H_ */
