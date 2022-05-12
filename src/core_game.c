/*
** EPITECH PROJECT, 2020
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** core_game.c
*/

#include "rpg.h"

void init_game(window_t *window, asset_t *asset, music_t *music,
    stats_t *stats, map_t *map)
{
    lose_life(window, asset);
    if (window->lose == 1 || window->win == 1) {
        disp_end(window, music);
    } else {
        player_pos(asset);
        sfView_setCenter(window->view, (sfVector2f){asset->player.p_x,
        asset->player.p_y});
        display_asset_game(window, asset, stats, map);
        open_chest(asset, window, stats);
        open_chest_cure(asset, window, stats);
        sfRenderWindow_display(window->window);
        sfRenderWindow_clear(window->window, sfBlack);
    }
}