/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** display_box
*/

#include "rpg.h"

void display_box(window_t *window, asset_t *asset)
{
    sfRenderWindow_drawSprite(window->window, asset->box.sprite, NULL);
}

void display_box_on(window_t *window, asset_t *asset)
{
    sfSprite_setTextureRect(asset->on_off.sprite, (sfIntRect){0, 0, 800, 753});
    sfRenderWindow_drawSprite(window->window, asset->on_off.sprite, NULL);
    sfSprite_setPosition(asset->on_off.sprite, (sfVector2f){1000, 677});
}

void display_box_off(window_t *window, asset_t *asset)
{
    sfSprite_setTextureRect(asset->on_off.sprite, (sfIntRect)
    {800, 0, 800, 753});
    sfRenderWindow_drawSprite(window->window, asset->on_off.sprite, NULL);
    sfSprite_setPosition(asset->on_off.sprite, (sfVector2f){1000, 677});
}