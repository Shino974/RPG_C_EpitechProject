/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** player
*/

#ifndef PLAYER_H_
#define PLAYER_H_

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include "sprite.h"

typedef struct stats {
    int disp;
    sprite_t stats;
    sprite_t icon;
    char *str;
    int hp;
    int dps;
    int lvl;
    sfText *stats_txt;
    sfFont *stats_font;
    sprite_t weapon;
    sprite_t cure;
    int got_weapon;
    int got_cure;
}stats_t;

#endif /* !PLAYER_H_ */