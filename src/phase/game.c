/*
** EPITECH PROJECT, 2020
** B-MUL-200-RUN-2-1-myrpg-yann.joubert
** File description:
** game.c
*/

#include "rpg.h"

void init_launch_game(window_t *win, asset_t *asset, music_t *music,
    stats_t *stats)
{
    init_view_game(win);
    init_all_assets(asset);
    init_icon(stats);
    init_stats(stats);
    if (win->if_music == 0)
        init_music_game(music);
}

void launch_game(window_t *window, asset_t *asset, music_t *music,
    stats_t *stats, map_t *map)
{
    static int status = 0;

    if (window->phase == 2 && window->no_destroy_game == 0 && status == 0) {
        init_launch_game(window, asset, music, stats);
        asset->clock = sfClock_create();
        status = 1;
    }
    if (window->phase == 2 && status == 1) {
        analyse_event(window, asset, music, stats);
        init_game(window, asset, music, stats, map);
    }
    if (window->destroy_game == 1 || (window->phase != 2 &&
        window->phase != 4 && window->no_destroy_game == 0 &&
        status == 1)) {
        sfView_destroy(window->view);
        destroy_all_game(asset, stats, map);
        if (window->if_music == 0)
            destroy_music_game(music);
        status = 0;
    }
}