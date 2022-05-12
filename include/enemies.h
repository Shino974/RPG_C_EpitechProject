/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** enemis
*/

#ifndef ENEMIS_H_
#define ENEMIS_H_

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include "sprite.h"

typedef struct enemies {
    sprite_t *spr;
    int hp;
    int speed;
}enemies_t;

#endif /* !ENEMIS_H_ */
