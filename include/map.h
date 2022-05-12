/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** map
*/

#ifndef MAP_H_
#define MAP_H_

#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <SFML/Audio.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include "sprite.h"
#include <stdint.h>

static const int64_t FLIPPED_H_F = 0x80000000;
static const int64_t FLIPPED_V_F = 0x40000000;
static const int64_t FLIPPED_D_F = 0x20000000;

typedef struct layers_s {
    int64_t *layer;
    sfVector2u tile_s;
    sfTexture *model;
    sfVertexArray *vertices;
    int h;
    int w;
    struct layers_s *next;
}layers_t;

typedef struct map_s {
    layers_t *head;
}map_t;

#endif /* !MAP_H_ */