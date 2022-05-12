/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** display_inv_slots
*/

#include "rpg.h"

void disp_inv_slots(asset_t *asset, stats_t *stats, window_t *window)
{
    sfSprite_setPosition(asset->inv_slots.sprite,
    (sfVector2f){sfRenderWindow_getSize(window->window).x - 168, 200});
    sfRenderWindow_drawSprite(window->window, asset->inv_slots.sprite, NULL);
    if (stats->got_weapon == 1) {
        sfSprite_setPosition(stats->weapon.sprite,
        (sfVector2f){sfRenderWindow_getSize(window->window).x - 130, 220});
        sfRenderWindow_drawSprite(window->window, stats->weapon.sprite, NULL);
    }
    if (stats->got_cure == 1) {
        sfSprite_setPosition(stats->cure.sprite,
        (sfVector2f){sfRenderWindow_getSize(window->window).x - 130, 375});
        sfRenderWindow_drawSprite(window->window, stats->cure.sprite, NULL);
    }
}