/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** sprite
*/

#ifndef SPRITE_H_
#define SPRITE_H_

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <stdlib.h>

typedef struct sprite
{
    sfTexture *texture;
    sfSprite *sprite;
    sfIntRect rect;
    sfBool *is_repeated;
    sfVector2f pos_player;
    int dir;
    int p_x;
    int p_y;
}sprite_t;


#endif /* !SPRITE_H_ */
