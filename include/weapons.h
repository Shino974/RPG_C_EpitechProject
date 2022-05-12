/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** weapons
*/

#ifndef WEAPONS_H_
#define WEAPONS_H_

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include "sprite.h"
#include "bullets.h"

typedef struct weapons {
    sprite_t gun;
}weapons_t;

#endif /* !WEAPONS_H_ */
