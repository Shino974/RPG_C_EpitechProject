/*
** EPITECH PROJECT, 2020
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** display_asset1.c
*/

#include "rpg.h"

void display_asset_pause(window_t *window, asset_t *asset)
{
    sfRenderWindow_clear(window->window, sfBlue);
    sfRenderWindow_drawSprite(window->window, asset->bckg_pause.sprite, NULL);
}

void display_asset1_game(window_t *window, asset_t *asset, map_t *map)
{
    sfRenderWindow_clear(window->window, sfBlack);
    sfRenderWindow_setView(window->window, window->view_map);
    draw_map(window->window, map);
    sfRenderWindow_drawSprite(window->window, asset->mobs_d.sprite, NULL);
    sfRenderWindow_drawSprite(window->window, asset->player.sprite, NULL);
    sfRenderWindow_drawSprite(window->window, asset->pnj1.sprite, NULL);
    sfRenderWindow_drawSprite(window->window, asset->pnj2.sprite, NULL);
    sfRenderWindow_drawSprite(window->window, asset->pnj3.sprite, NULL);
    sfRenderWindow_drawSprite(window->window, asset->pnj4.sprite, NULL);
    sfRenderWindow_drawSprite(window->window, asset->pnj5.sprite, NULL);
    sfRenderWindow_drawSprite(window->window, asset->chest.sprite, NULL);
    sfRenderWindow_drawSprite(window->window, asset->player.sprite, NULL);
    sfRenderWindow_drawSprite(window->window, asset->chest_cure.sprite, NULL);
    draw_weapons(asset, window);
    sfRenderWindow_setView(window->window, window->view);
}

void display_asset_game(window_t *window, asset_t *asset, stats_t *stats,
    map_t *map)
{
    sfRenderWindow_clear(window->window, sfBlack);
    sfRenderWindow_setView(window->window, window->view);
    display_asset1_game(window, asset, map);
    text_pos(window, asset);
    sprite_text_pos(window, asset);
    zone_text(asset, window, stats);
    sfRenderWindow_setView(window->window, window->global_window);
    sfSprite_setPosition(stats->icon.sprite,
    (sfVector2f){190, sfRenderWindow_getSize(window->window).y / 7});
    sfRenderWindow_drawSprite(window->window, stats->icon.sprite, NULL);
    display_icon(stats, window);
    sfSprite_setPosition(asset->life_bar.sprite,
    (sfVector2f){sfRenderWindow_getSize(window->window).x / 34, 0});
    sfRenderWindow_drawSprite(window->window, asset->heart_bar.sprite, NULL);
    sfRenderWindow_drawSprite(window->window, asset->life_bar.sprite, NULL);
    display_stats(stats, window);
    disp_inv_slots(asset, stats, window);
}